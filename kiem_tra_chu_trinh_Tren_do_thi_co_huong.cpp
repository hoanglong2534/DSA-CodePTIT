#include<bits/stdc++.h>
using namespace std;

int n, m ;
vector<int> ke[1005];
int degree[1005];

void kahn(){
	queue<int> q;
	for(int i = 1 ; i <= n ;i++){
		if(degree[i] == 0) q.push(i);
	}
	int cnt = 0 ; 
	while(!q.empty()){
		int u = q.front(); q.pop();
		cnt++;
		for(int v : ke[u]){
			degree[v]--;
			if(degree[v] == 0){
				q.push(v);
			}
		} 
	}
	if(cnt == n) cout << "NO" << endl;
	else cout << "YES" << endl;
	
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0 ; i < 1005; i++){
			ke[i].clear();
			degree[i] = 0;
		} 
		cin >> n >> m;
		for(int i = 1 ; i <= m ;i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			degree[y]++;
			
		}
		
		kahn();
		
	}
}
