#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k ;
		cin >> n >> k;
		long long a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a ,a + n);
		int pos = min(k, n - k);
		for(int i = 1 ; i < n ; i++){
			a[i] += a[i - 1];
		}
		cout << a[n - 1] - 2 * a[pos - 1] << endl;
		
	}
} 
