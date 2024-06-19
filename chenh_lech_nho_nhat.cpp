#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		
		int res;
		
		sort(a , a + n);
		vector<int> v;
		for(int i = n - 1; i >= 0; i--){
			res = abs(a[i] - a[i - 1]);
			v.push_back(res);
		}
		sort(v.begin(), v.end());
		cout << v[0] << endl;
	}
}
