#include<bits/stdc++.h>
using namespace std;

int n , m;
vector<int> ke[1005];
int visited[1005];
vector<pair<int, int>> canh;

void dfs(int u, int x , int y){
	visited[u] = 1;
	for(auto v : ke[u]){
		if(x == u && y == v || x == v && y == u) continue;
		if(!visited[v]){
			dfs(v, x , y);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1 ; i <= m ;i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
			canh.push_back({x , y});
		}
		memset(visited, 0 , sizeof(visited));
		int tplt = 0 ;
		for(int i = 1 ; i <= n ; i++){
			if(!visited[i]){
				++tplt;
				dfs(i, -1 , -1);
			}
		}
		for(auto it : canh){
			int x = it.first;
			int y = it.second;
			int dem = 0 ;
			memset(visited, 0 , sizeof(visited));
			for(int i = 1 ; i <= n; i++){
				if(!visited[i]){
					dem++;
					dfs(i, x , y);
				}
			}
			if(dem > tplt) {
			cout << x << " " << y << " "; 
			}
		}
		cout << endl;
		for(int i =1 ; i <= n ; i++){
			ke[i].clear();
		}
		canh.clear();
	
	}
}
