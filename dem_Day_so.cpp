#include<bits/stdc++.h>
using namespace std;

const int mod = 123456789;

long long powmod(int a, long long n){
	if(n == 0) return 1;
	long long x = powmod(a, n / 2);
	if(n % 2 == 0){
		return x * x % mod;
	}
	return a * (x *x % mod) % mod;
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << powmod(2, n - 1) << endl;
		
	}
}

