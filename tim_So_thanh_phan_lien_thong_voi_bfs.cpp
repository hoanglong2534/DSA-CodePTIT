#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> ke[1005];
int visited[1005];


void bfs(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto v : ke[x]){
			if(!visited[v]){
				q.push(v);
				visited[v] = 1;
			}
		}
	}
}

int main(){
	int t;cin >> t;
	while(t--){
		cin >> n >> m;
		memset(visited, 0 , sizeof(visited));
		for(int i = 0 ; i < 1005; i++){
			ke[i].clear();
		}
		
		for(int i = 1; i <= m ;i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int cnt = 0 ;
		for(int i = 1 ; i <= n ; i++){
			if(!visited[i]){
				bfs(i);
				cnt++;
			}
		}
		
		cout << cnt << endl;
	}
}
