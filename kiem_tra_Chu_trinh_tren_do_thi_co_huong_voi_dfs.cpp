#include<bits/stdc++.h>
using namespace std;

int n ,m;
vector<int> ke[1005];
int visited[1005];
int degree[1005]; 


void xoadandinh(){
	queue<int> q;
	for(int i =1 ; i <= n ; i++){
		if(degree[i] == 0) {
			q.push(i);
		}
	}
	vector<int> topo;
	while(!q.empty()){
		int u = q.front(); q.pop();
		topo.push_back(u);
		for(auto v : ke[u]){
			degree[v]--;
			if(degree[v] == 0) q.push(v);
		}
	}
	if(topo.size() < n) cout << "NO" << endl;
	else cout << "YES\n";
	
		
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1 ; i < 1005; i++){
			ke[i].clear();
			visited[i] = 0 ;
			degree[i] = 0;
		}
		for(int i =1 ; i <= m ; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
			degree[y]++
		}
		xoadandinh();
	}
} 
