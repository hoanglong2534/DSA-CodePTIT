#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1005];
int visited[1005]; 

void nhap(){
	cin >> n >> m;
	for(int i = 1 ; i <= m ; i++){
		int x , y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}

}

void dfs(int u){
	visited[u] = 1;
	for(auto x : ke[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}

void check(){
	int q; cin >> q;
	while(q--){
			memset(visited, 0 , sizeof(visited));
		int x, y ;
 		cin >> x >> y;
	 	dfs(x);
	 	if(visited[y]){
	 		 cout << "YES\n";
		 }
		 else cout << "NO\n";
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		check();
		
		for(int i = 0 ; i < 1005; i++){
			ke[i].clear();
		}

	}
	
}
