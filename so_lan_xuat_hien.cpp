#include<bits/stdc++.h>
using namespace std;

int cnt[10000001] = {0}; 

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		memset(cnt, 0 , sizeof(cnt));
		for(int i = 0; i < n ; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cnt[a[i]]++;
		}
		
		if(cnt[x] == 0) cout << "-1\n";
		else cout << cnt[x] << endl; 
	}
}
