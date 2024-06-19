#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		priority_queue<long long, vector<long long>, greater<long long> > Q;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			Q.push(x);
		}
		long long ans = 0 ;
		while(Q.size() > 1){
			long long t1 = Q.top();
			Q.pop();
			long long t2 = Q.top();
			Q.pop();
			ans += t1 + t2;
			Q.push(t1 + t2);
			
		}
		cout << ans << endl;
	}
}
