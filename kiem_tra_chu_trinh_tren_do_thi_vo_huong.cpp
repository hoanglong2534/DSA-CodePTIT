#include<bits/stdc++.h>
using namespace std;

int n , m;
vector<int> ke[1005];
int visited[1005];
int parent[1005];

int dfs(int u){
	visited[u] = 1;
	for(auto x : ke[u]){
		if(!visited[x]){
			parent[x] = u;
			if(dfs(x)) return 1;
			
			
		}
		else {
			if(x != parent[u]){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
            ke[i].clear();
        }
		for(int i = 1 ; i <= m ; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}	
		memset(visited, 0 , sizeof(visited));
		int ok = 0 ; 
		for(int i = 1 ; i <= n ; i++){
			if(!visited[i]){
				if(dfs(i)) {
					ok = 1;
					break;
				}
			}
		}	
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
} 
