#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1004];
vector<int> ke2[1004];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1 ; i <= n ; i++){
			ke[i].clear();
			ke2[i].clear();
		}
		for(int i = 1 ; i <= m ;i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke2[y].push_back(x);
		
		}
		int ok = 1;
		for(int i = 1 ; i <= n ; i++){
			if(ke[i].size() != ke2[i].size()){
				ok = 0 ;
				break;
			}
		}
		if(ok) cout << 1 << endl;
		else cout << 0 << endl;
	}
} 
