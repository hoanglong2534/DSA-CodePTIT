#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &x : a) cin >> x;
		sort(a , a + n);
		long long ans = 0;
		for(int i = 0 ; i < n ; i++){
			ans += (long long) i * a[i];
			ans %= (int)(1e9 + 7);
		}
		cout << ans << endl;
	}
	
}
