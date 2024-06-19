#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

long long rev(long long n){
	long long res = 0;
	while(n){
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

long long powmod(long long a, long long n){
	if(n == 0) return 1;
	long long x = powmod(a, n / 2);
	if(n % 2 == 0){
		return x * x % mod;
	}
	return a * (x * x % mod) % mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << powmod(n, rev(n)) << endl;
	}
}
