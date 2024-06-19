#include<bits/stdc++.h>
using namespace std;

int n, m , s, t;
vector<int> ke[1005];
int visited[1005];
int parent[1005];

void dfs(int u){
	visited[u] = 1;
	for(auto x : ke[u]){
		if(!visited[x]){
			dfs(x);
			parent[x] = u;
		}
	}
}

int main(){
	int y;
	cin >> y;
	while(y--){
		
		for(int i = 0 ; i < 1005; i++){
			ke[i].clear();
			visited[i] = 0;
		}
		
		cin >> n >> m >> s >> t;
		
		for(int i = 1; i <= m ; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		
		vector<int> v;
		dfs(s);
		if(!visited[t]){
			cout << "-1\n";
		}
		else{
			while(t != s){
				v.push_back(t);
				t = parent[t];
			}
			v.push_back(s);
			reverse(v.begin(), v.end());
		} 
		for(auto x : v) cout << x << " ";
		cout << endl;
	}
} 
