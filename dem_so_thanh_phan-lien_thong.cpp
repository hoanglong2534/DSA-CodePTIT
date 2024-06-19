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
		memset(visited, 0 , sizeof(visited));
}

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
		int cnt = 0;
		nhap();
		for(int i = 1 ; i <= n ; i++){
			if(!visited[i]){
				dfs(i);
				cnt++;
			}
		} 
		 
		cout << cnt << endl;
		for(int i = 0 ; i < 1005 ; i++){
			ke[i].clear();
		} 
	}
}
