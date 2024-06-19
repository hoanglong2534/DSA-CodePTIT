#include<bits/stdc++.h>
using namespace std;

const int n = 8;
int  x[500], res = 0;
bool cot[500], xuoi[500], nguoc[500];
int a[100][100];

void ql(int i){
	for(int j = 1 ; j <= n; j++){
		if(cot[j] == 0 && !xuoi[n + i - j] && !nguoc[i + j - 1]){
			x[i] = j;
			cot[j] = xuoi[n + i - j] = nguoc[i + j - 1] = 1;
			if(i == n){
				int tong = 0;
				for(int k = 1; k <= n ;k++){
					tong += a[k][x[k]];
				}
				res = max(res, tong);
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
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n; j++){
				cin >> a[i][j];
			}
		}
		ql(1);
		cout << res << endl;
		res = 0;
	}
} 
