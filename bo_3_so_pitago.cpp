#include<bits/stdc++.h>
using namespace std;

int check(long long a[], int n){
	for(int i = n - 1; i >= 2; i--){
		int l = 0, r = n - 1;
		while(l < r){
			if(a[l] + a[r] == a[i]) return 1;
			else if(a[l] + a[r] < a[i]){
				l++;
			}
			else r--;
		}
	}
	return 0;
} 

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
 		long long a[n];
		for(int i = 0 ; i < n; i++){
			int x;
			cin >> x; 
			a[i] = (long long) x*x;
		}
		
		sort(a, a + n); 
		if(check(a,n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	
	}
	
} 
