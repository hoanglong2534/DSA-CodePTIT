#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[10005];

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1 ; i <= m ; i++){
			int x , y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		for(int i = 1 ; i <= n ; i++){
			sort(ke[i].begin(), ke[i].end());
			cout << i << ": ";
			for(auto x : ke[i]){
				cout << x << " ";
			}
			cout << endl;
		}
		for(int i = 1 ;  i<= n ; i++){
			ke[i].clear();
		}
	}
}
