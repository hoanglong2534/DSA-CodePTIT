#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> k[1005];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1 ; i <= m ; i++){
			int x , y;
			cin >> x >> y;
			k[x].push_back(y);
			k[y].push_back(x);
		}
		for(int i = 1 ; i <= n ; i++){
			sort(k[i].begin(), k[i].end());
			cout << i << ": ";
			for(auto x : k[i]){
				cout << x << " ";
			}
			cout << endl;
		}
		for(int i = 1 ; i <= n; i++){
			k[i].clear();
		}
	}	
}
