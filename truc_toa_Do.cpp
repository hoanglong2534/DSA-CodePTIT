#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int , int> a, pair<int , int> b){
	return a.second < b.second;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x1[n], x2[n]; 
		vector<pair<int , int>> v;
		for(int i = 0 ; i < n ; i++){
			cin >> x1[i] >> x2[i];
			v.push_back(make_pair(x1[i] , x2[i]));
		}
		sort(v.begin(), v.end(), cmp);
		int ans = 1;
		int kt = v[0].second;
		for(int i = 1 ; i < n ; i++){
			int bd = v[i].first;
			if(bd >= kt){
				ans++;
				kt = v[i].second;
			}
		}
		cout << ans << endl;
	}
}
