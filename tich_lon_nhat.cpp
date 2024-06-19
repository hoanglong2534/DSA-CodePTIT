#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	sort(a.begin(), a.end());
	
	vector<int> ans;
	ans.push_back(a[0] * a[1] * a[2]);
	ans.push_back(a[0] * a[1]);
	ans.push_back(a[n - 1] * a[n - 2]);
	ans.push_back(a[n - 1] * a[n - 2] * a[n - 3]);
	ans.push_back(a[0] * a[1] * a[n - 1]);
	sort(ans.begin(), ans.end());
	cout << ans[ans.size() - 1];
}
