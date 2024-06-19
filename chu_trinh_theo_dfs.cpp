#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1005];
int visited[1005];
int parent[1005];
vector<int> v[1005];

void dfs(int u){
	visited[u] = 1;
	for(auto x : ke[u]){
		if(!visited[x]){
			parent[x] = u;
			if(dfs(x)) v.push_back(x);
		}
		else{
			if(x != parent[u]) v.push_back(x);
		}
	}

}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0 ; i < 1005; i++){
			visited[i] = 0;
			ke[i].clear();
			v[i] = 0;
		}
		for(int i = 1 ; i <= m ; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dfs(1);
		for(auto x : v) cout << x << " ";
		cout << endl;
		
		
	}
}
