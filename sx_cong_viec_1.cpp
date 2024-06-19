#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int,int>> a(n);
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].first ;
		}
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].second;
		}
		sort(a.begin(), a.end(), cmp);
		int cnt = 1;
		int kt = a[0].second;
		for(int i = 1 ; i < n ; i++){
			if(a[i].first >= kt){
				cnt++;
				kt = a[i].second;
			}
		}
		cout << cnt << endl;
		
	}
}
