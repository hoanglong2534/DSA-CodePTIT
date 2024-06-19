#include<bits/stdc++.h>
using namespace std;

int n, m , u;
vector<int> ke[1005];
int visited[1005];

void dfs(int u){
	cout << u << " ";
	visited[u] = 1;
	for(auto x : ke[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(visited, 0 , sizeof(visited));
		cin >> n >> m >> u;
		for(int i = 1 ; i <= m ; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dfs(u);
		for(int i = 1 ; i <= n ; i++){
			ke[i].clear();
		}
		cout << endl;
	}
}
