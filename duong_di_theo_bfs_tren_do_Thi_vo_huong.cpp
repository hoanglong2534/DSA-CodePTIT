#include<bits/stdc++.h>
using namespace std;

int n, m, s , t;
vector<int> ke[1005];
int visited[1005], parent[1005];

void bfs(int u){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto y : ke[x]){
			if(!visited[y]){
				parent[y] = x;
				visited[y] = 1;
				q.push(y);
			}
		}
	}
}

int main(){
	int y;
	cin >> y;
	while(y--){
		cin >> n >> m >> s >> t;
		for(int i = 0 ; i < 1005; i++){
			ke[i].clear();
			visited[i] = 0;
		}
		for(int i = 1 ; i <= m ; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		
		bfs(s);
		vector<int> v;
		v.clear();
		
		if(!visited[t]) cout << -1 << endl;
		else{
			while(t != s){
				v.push_back(t);
				t = parent[t];
			}
			v.push_back(s);
			reverse(v.begin(), v.end());
		}
		for(auto x : v) cout <<  x << " ";
		cout << endl;
		
	}
	return 0;
}
