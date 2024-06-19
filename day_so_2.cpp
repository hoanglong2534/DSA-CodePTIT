#include<bits/stdc++.h>
using namespace std;


int main(){
	vector<vector<int>> v;
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a;
		for(int i = 0 ; i < n ; i++){
			int x; cin >> x;
			a.push_back(x);
		}
		v.push_back(a);
	
		while(a.size() > 1){
			for(int i = 0 ; i < a.size() - 1; i++){
				a[i] = a[i] + a[i + 1];
			}
			a.pop_back();
			v.push_back(a);
			
		}
		
		for(int i = v.size() - 1; i >= 0 ; i--){
			cout << "["; 
			for(int j  = 0 ; j < v[i].size() - 1; j++){
				cout << v[i][j] << " ";
			}
			cout << v[i].back() << "]" << " ";
		}	
		cout << endl;
		v.clear();
		
	}
} 
