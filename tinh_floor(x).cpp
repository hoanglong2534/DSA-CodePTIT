#include<bits/stdc++.h>
using namespace std;

long long check(vector<long long> a, int x){
	int l = 0;
	int r = a.size() - 1;
	int ans = -1;
	while(l <= r){
		int mid = (l + r)/ 2;
		if(a[mid] <=  x) {
			ans = mid + 1;
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return ans;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , x;
		cin >> n >> x;
		vector<long long> a(n);
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		cout << check(a,x) << endl;
		
		
	}
}
