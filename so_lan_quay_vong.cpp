#include<bits/stdc++.h>
using namespace std;

void quay(int a[], int n){
	int tmp = a[n - 1];
	
	for(int i = n - 1 ; i > 0 ; --i){
		a[i] = a[i - 1];
	}
	
	a[0] = tmp;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		
		vector<int> v;
		vector<vector<int>> ans;
	
		for(int i = 0 ; i < n ; i++){
		
			cout << "lan thu" << i << " ";
			for(auto x : a) v.push_back(x);
			ans.push_back(v);
			v.clear();
			for(auto x : ans){
				for(auto k : v){
					cout << k  << " ";
				}
				cout << endl;
			}
			quay(a , n);
			cout << endl;
		}
		
	}
}
