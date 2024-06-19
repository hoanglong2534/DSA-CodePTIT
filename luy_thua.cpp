#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

long long powmod(int a, long long n){
	if(n == 0) return 1;
	long long x = powmod( a , n / 2);
	if( n % 2 == 0) return x * x % mod;
	return a * (x *x % mod) % mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; 
		long long k;
		cin >> n >> k;
		cout << powmod(n , k) << endl;
	}
}
