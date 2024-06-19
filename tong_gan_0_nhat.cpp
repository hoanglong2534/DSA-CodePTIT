#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		
		int res = INT_MAX;
		vector<int> v;
		for(int i = 0 ; i < n - 1 ; i++){
			for(int j = i + 1; j < n ; j++){
				int ans = a[i] + a[j];
				if(abs(ans) < abs(res)) res = ans;
			}
		}
		
		cout << res << endl;
	}
	return 0;
}
