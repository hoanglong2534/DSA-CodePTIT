#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
		}
		set<int> s;
		for(int i = 0 ; i < n; i++){
			while(a[i] != 0 ){
				int res = a[i] % 10;
				a[i] /= 10;
				s.insert(res);
			}
		}
		for(auto x : s) cout << x << " ";
		cout << endl;
	}
}
