#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		priority_queue<long long, vector<long long> , greater<long long> > Q;
		for(int i = 0 ; i < n ; i++){
			long long  x;
			cin >> x;
			Q.push(x);
		}
		long long ans = 0 ;
		while(Q.size() > 1){
			long long t1 = Q.top();
			Q.pop();
			long long t2 = Q.top();
			Q.pop();
			long long s = (t1 + t2) % mod;
			ans = (ans + s) % mod;
			Q.push(s); 
		
		}
		cout << ans << endl;
	}
}
