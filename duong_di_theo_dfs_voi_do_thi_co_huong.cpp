#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
int visited[1005]; 
int parent[1005]; 
int n,m, u , v;

void DFS(int u){
	visited[u] = 1;
	for(auto x : ke[u]){
		if(!visited[x]){
			parent[x] = u;
			DFS(x);
		}
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> u >> v;
		memset(visited, 0 , sizeof(visited));
		for(int i = 1 ; i <= m; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
		} 
	
		DFS(u);
		if(!visited[v]) cout << "-1\n";
		else{
				vector<int> k;
				k.clear();
				while(v != u){
					k.push_back(v);
					v = parent[v];
				}
				k.push_back(u);
				reverse(k.begin(), k.end());
				for(auto x : k){
					cout << x << " ";
				}
			}
			cout << endl;
		
		for(int i = 0 ; i < 1005; i++){
			ke[i].clear();
		}
		}
		
	}

