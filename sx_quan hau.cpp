#include<bits/stdc++.h>
using namespace std;


int n, x[500], cnt = 0 ;
int cot[600], xuoi[600], nguoc[600];

void ql(int i){
	for(int j = 1 ; j <= n; j++){
		if(!cot[j] && !xuoi[n + i - j] && !nguoc[i + j - 1]) {
			x[i] = j;
			cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 1;
			if(i == n){
				cnt++;
			}
			else{
				ql(i + 1);
			}
			cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ql(1);
		cout << cnt << endl;
		cnt = 0 ;
	}
}
