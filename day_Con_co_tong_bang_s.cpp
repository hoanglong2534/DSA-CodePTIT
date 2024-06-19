#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n , s;
		cin >> n >> s;
		vector<int> a(n);
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		vector<bool> dp(s + 1, false);
		dp[0] = true;
		for(int i = 0 ; i < n ; i++){
			for(int j = s ; j >= a[i]; j--){
				if(dp[j - a[i]] == true){
					dp[j] = true;
				} 
			}
		}
		if(dp[s]) cout << "YES\n";
		else cout << "NO\n";
	}
}
