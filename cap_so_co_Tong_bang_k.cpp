#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long cnt  = 0 ;
		unordered_map<int, int> mp;
		for(int i = 0 ; i < n ;i++){
			int x;
			cin >> x;
			int res  =  k - x;
			cnt += mp[res];
			mp[x]++;
		}
		cout << cnt << endl;
	}
}
