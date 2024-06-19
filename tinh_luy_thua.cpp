#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long solve(int a, long long b){
	if(b == 0) return 1;
	long long x = solve(a, b/2);
	if(b % 2 == 0){
		return x * x % mod;
	}
	else{
		return (a*(x * x % mod)) % mod;
	}
}

int main(){
	for(int i = 1 ; i <= 20 ; i++){
		int a; cin >> a;
		long long b ; cin >> b;
		if(a == 0 && b == 0) break;
		cout << solve(a ,b) << endl;
	} 
} 
