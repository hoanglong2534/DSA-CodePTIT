#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		priority_queue<int> q;
		int k; cin >> k;
		string s;
		cin >> s;
	
			
		int d[256] = {0};
		for(auto x : s) d[x]++;
		for(int i= 0 ; i < 256 ; i++){
			if(d[i]) q.push(d[i]);
		}
		
		while(k--){
			int u = q.top(); q.pop();
			if(u - 1 > 0){
				q.push(u - 1);
			}
		}
		long long res  = 0;
		while(!q.empty()){
			int u = q.top();
			q.pop();
			res += pow(u , 2);
		}
		cout << res << endl;
		}
}
