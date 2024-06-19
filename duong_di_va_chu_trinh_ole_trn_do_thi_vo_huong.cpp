#include<bits/stdc++.h>
using namespace std;

int n, m ;
vector<int> ke[1005];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1 ; i <= m ; i++){
			int x, y ;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int res = 0 ;
		for(int i = 1 ; i <= n ; i++ ){
			if(ke[i].size() % 2 != 0) res++;
		}
		if(res == 0) cout << 2 << endl;
		else if (res == 2) cout << 1 << endl;
		else cout << 0 << endl;
		
		for(int i = 1 ; i <=n ;i++){
			ke[i].clear();
		}
	}	
}

