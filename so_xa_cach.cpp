#include<bits/stdc++.h>
using namespace std;

int n, x[100];
int used[100];

void ql(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j] && abs(j - x[i - 1]) != 1){
			x[i] = j;
			used[j] = 1;
			if(i == n){
				for(int u = 1 ; u <= n ; u++){
					cout << x[u];
				}
				cout << endl;
			}
			else{
				ql(i + 1);
			
			}
			used[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		x[0] = -1;
		ql(1);
		cout << endl;
	}
	
	
}
