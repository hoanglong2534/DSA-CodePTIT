#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n;
	long long s = 0 ;
	long long k;
	cin >> n >> k;
	long long a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		s += a[i];
	}
	if(k > s) return 0;
	sort(a, a + n);
	long long sum = 0 ;
	for(int i = 0 ; i < n ; i++){
		long long l = i + 1;
		long long r = n - 1;
		while(l < r){
			sum = a[l] + a[r] + a[i];
			if(sum == k){
				return 1;
			}
			else if(sum < k){
				l++;
			}
			else{
				r--;
			}
		}
		
	}
	
	
	 return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		if(solve()) cout << "YES" << endl;
		else {
			cout << "NO" << endl;
		}
		
	}	
} 
