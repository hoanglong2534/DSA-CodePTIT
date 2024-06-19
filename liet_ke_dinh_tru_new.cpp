#include<bits/stdc++.h>
using namespace std;

int n , m , timer = 0 ;
vector<int> ke[1005];
int disc[1005], low[1005], visited[1005], tru[1005]; //tru: mang luu cac dinh tru

void dfs(int u, int parent){
	visited[u] = 1;
	disc[u] = low[u] = ++timer;
	int child = 0;
	for(auto v : ke[u]){
		if(v == parent) continue;
		if(!visited[v]){
			dfs(v,u);
			child++;
			low[u] = min(low[u], low[v]);
			if(parent != -1 && disc[u] <= low[v]){
				tru[u]  = 1;
			}
		}
		else{
			low[u] = min(low[u], disc[v]);
		}
	}
	if(parent == -1 && child > 1) tru[u] = 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
	
		for(int i = 0 ; i < 1005; i++){
			ke[i].clear();
			visited[i] = tru[i] = disc[i] = low[i] = 0;
		}
		
		timer = 0 ;
		for(int i = 0 ; i < m ; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1 ; i <= n ; i++){
			if(!visited[i]){
				dfs(i, - 1);
			}
		}
		int ok = 1;
		for(int i = 1 ; i <= n ; i++){
			if(tru[i]){
				if(!ok) cout << " ";
				cout << i;
				ok = 0 ;
			}
		}
		cout << endl; 
	}
	 
}
