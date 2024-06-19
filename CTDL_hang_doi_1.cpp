#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	
	while(t--){
		int q;
		cin >> q;
		queue<int> k;
		while(q--){
			int x;
			cin >> x;
			if(x == 1){
				cout << k.size() << endl;
			}
			else if(x == 2){
				if(!k.empty()) cout << "NO" << endl;
				else cout << "YES" << endl;
			}
			else if(x == 3){
				int u ;
				cin >> u;
				k.push(u);
			}
			else if(x == 4){
				if(!k.empty()){
					k.pop();
				}
			}
			else if(x == 5){
				if(!k.empty()){
					int y = k.front();
					cout << y << endl;
				}
				else cout << -1  << endl;
			}
			else if(x == 6){
				if(!k.empty()){
					cout << k.back() << endl;
				}
				else cout << -1 << endl;
			}
			
		}
	
	}
} 
