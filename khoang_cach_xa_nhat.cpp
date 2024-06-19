#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b){
	return a.first < b.first;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		int a[n];
		vector<pair<int,int>> v;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			v.push_back(make_pair(a[i],i));
		}
		sort(v.begin(), v.end(), cmp);
		
		int res = INT_MIN;
		int tmp = v[0].second;
		for(int i = 1 ; i < n ; i++){
			if(res < v[i].second - tmp) {
				res = v[i].second - tmp;
			}
			tmp = min(tmp, v[i].second);
		}
		cout << res << endl;
	}
}
