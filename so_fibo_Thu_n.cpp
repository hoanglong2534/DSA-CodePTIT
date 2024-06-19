#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

struct matrix{
	long long a[2][2];
	friend matrix operator * (matrix x, matrix y){
		matrix ans;
		for(int i = 0; i < 2 ; i++){
			for(int j = 0 ; j  < 2 ; j++){
				ans.a[i][j] = 0 ;
				for(int k = 0 ; k < 2 ; k++){
					ans.a[i][j] += x.a[i][k] * y.a[k][j];
					ans.a[i][j] %= mod;
				}
			}
		}
		return ans;
	}	
};

matrix solve(matrix a, long long n){
	if(n == 1) return a;
	matrix x = solve(a, n / 2);
	if(n % 2 == 0){
		return x * x;
	}
	else{
		return a * x * x;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n; 
		cin >> n;
		matrix a;
		a.a[0][0] = 1;
		a.a[0][1] = 1;
		a.a[1][0] = 1;
		a.a[1][1] = 0;
		matrix ans = solve(a , n);
		cout << ans.a[0][1] << endl;
	}	
}
