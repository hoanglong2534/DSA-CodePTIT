#include<bits/stdc++.h>
using namespace std;

void sx(vector<int>& a, int n){
	vector<vector<int>> v;
	for(int i = 0 ; i < n - 1; i++){
		for(int j = i + 1; j < n ; j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
				
				}
			}
		vector<int> tmp;
		for(int u = 0; u < n; u++){
			tmp.push_back(a[u]);
		}
		v.push_back(tmp);
	}
	
	for(int i = v.size() - 1; i >= 0; i--){
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n ; j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n ; i++){
			cin >> a[i];
		}
		
		sx(a, n);

		cout << endl; 
	}
}
