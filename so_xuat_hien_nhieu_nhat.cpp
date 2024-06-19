#include<bits/stdc++.h>
using namespace std;
int cnt[1000001] = {0};
int main(){
	int t;
	cin >> t;
	while(t--){
		int n ; cin >> n;
		int a[n];
		
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}
		int res = INT_MIN;
		int ans;
		int ok = 0;
		for(int i = 0; i < n; i++){
			if(cnt[a[i]] > n/2){
				res = max(cnt[a[i]], res);
				ans = a[i];
				ok = 1;
			}
		}
		if(ok){
			cout << ans << endl;
		}
		else{
			cout << "NO" << endl;
		}
		for(int i = 0; i < n ; i++){
			cnt[a[i]] = 0;
		}
		
	}
}
