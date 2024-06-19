#include<bits/stdc++.h>
using namespace std;

map<string, vector<string>> adj;
map<string, int> indegree;
map<string, bool> visited;
queue<string> q;

void check(){
	while(!q.empty()){
		string u = q.front();
		q.pop();
		for(string v : adj[u]){
			indegree[v]--;
			if(indegree[v] == 0){
				q.push(v);
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		string u , v , op;
		cin >> u >> op >> v;
		if(op == "<"){
			swap(u,v);
		}
		adj[u].push_back(v);
		indegree[v]++;
		visited[u] = visited[v] = true;
	}
	for(auto& [u,_] : visited){
		if(degree[u] == 0){
			q.push(u);
		}
	}
	check();
	for(auto& [u,_] : visited){
		if(degree[u] > 0){
			cout << "impossible" << endl;
			return 0;
		}
	}
	cout << "posibile" << endl;
	return 0;
}
