#include<bits/stdc++.h>
using namespace std;

void sx(vector<int>& a, int n){
	vector<int> tmp;
	vector<vector<int>> v;
	
	for(int i = 0 ; i < n - 1 ; i++){
		int min_pos = i;
		for(int j = i + 1; j < n ; j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		if(min_pos != i){
			swap(a[i], a[min_pos]);
		}
		
			for(int u = 0; u < n; u++){
				tmp.push_back(a[u]);
			}
			v.push_back(tmp);
			tmp.clear();	
	}
	
		
		for(int i = v.size() - 1; i >= 0; i--){
			cout << "Buoc " << i + 1 << ": ";
			for(int j = 0; j < n; j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	
}

int main(){
	int n ;
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	} 
	sx(a , n);
}
