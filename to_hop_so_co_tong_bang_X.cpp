#include<bits/stdc++.h>
using namespace std;

int n, k, x[200], a[200];
vector<vector<int>> v;

void ql(int i, int bd, int s){
	for(int j = bd; j <= n ; j++){
		if(s + a[j] <= k){
			x[i] = a[j];
			if(s + a[j] == k){
				vector<int> tmp(x + 1, x + i + 1);
				v.push_back(tmp);
			}
			else{
				ql(i + 1, j , s + a[j]);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		 cin >> n >> k;
		 for(int i = 1; i <= n ; i++){
		 	cin >> a[i];
		 }
		 sort(a + 1, a + n + 1);
		 ql(1, 1, 0);
		 if(v.size() == 0) cout << "-1";
		 else{
		 	cout << v.size() << " ";
		 	for(auto x : v){
		 		cout << "{";
		 		for(int i = 0; i < x.size(); i++){
		 			cout << x[i];
		 			if(i < x.size() - 1) cout << " ";
				 }
				 cout << "}" << " ";
			 }
		 }
		 
		 v.clear();
		 cout << endl;
	}
}
