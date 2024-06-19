#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7; 
long long  f[1000005] = {0};

void fb(){
	f[0] = 0 ;
	f[1] = 1 ;
	for(int i = 2 ; i <= 1000005 ; i++){
		f[i] = (f[i - 2] + f[i - 1]) % mod ;
	}	
	
}
int main(){
	fb();
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << f[n] << endl; 
		
	}
}
