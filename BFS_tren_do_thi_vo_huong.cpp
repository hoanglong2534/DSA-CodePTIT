#include<bits/stdc++.h>
using namespace std;

int n, m, u ;
vector<int> ke[1005];
int visited[1005];

void bfs(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout << x << " ";
		visited[x]  = 1 ;
		for(auto y : ke[x]){
			if(!visited[y]){
				q.push(y);
				visited[y] = 1;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> u;
		memset(visited, 0 , sizeof(visited));
		for(int i = 1 ; i <= m ; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		bfs(u);
		for(int i = 1 ; i <= n ; i++){
			ke[i].clear();
		}
		cout << endl;
	}
}
