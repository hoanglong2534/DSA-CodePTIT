#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int s = 0;
		int s1 = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			s += a[i];
		}
		
		for(int i = 0 ; i < n ; i++){
			s -= a[i];
			if(s == s1){
				cout << i + 1 << endl;
				break;
			}
			s1 += a[i];
		} 
		if(s1 != s){
			cout << "-1\n";
		}
		
	}
}
