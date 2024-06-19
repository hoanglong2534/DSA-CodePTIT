#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];

int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(a[i][j]) {
				ke[i].push_back(j);
			}
		}
		
	
	}
	for(int i = 0 ; i < n ; i++){
		sort(ke[i].begin(), ke[i].end());
		for(auto x : ke[i]){
			cout << x + 1 << " ";
		}
		cout << endl;
	}
} 
