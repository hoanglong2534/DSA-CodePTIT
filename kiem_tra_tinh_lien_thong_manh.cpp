#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
int n , m;
int visited[1005];

void dfs(int u){
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
		cin >> n >> m;
		for(int i = 0 ; i < 1005 ; i++){
			ke[i].clear();
		}
		for(int i = 1 ; i <= m; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		memset(visited, 0 , sizeof(visited));
		int ok = 1  ; 
		for(int i = 1 ; i <= n ; i++){
			memset(visited, 0 , sizeof(visited));
			dfs(i);
			
			for(int j = 1 ; j <= n ; j++){
				if(!visited[j]){
					ok = 0;
					break; 
				}
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO"  << endl;
		
	}
	
	return 0; 
}
