#include <bits/stdc++.h>
using namespace std;

void solve() {
	int s , d;
	cin >> s >> d;
	if( s > 9 * d){
		cout << -1 ;
		return ;
	}
	
	int a[d] = {1};
	s--;
	for(int i = d - 1; i >= 0 ; i--){
		int x = min(s, 9 - a[i]);
		a[i] += x ;
		s -= x;
	}
	
	for(auto x : a){
		cout << x;
	}
}


int main() {
   int t;
   cin >> t;
   while(t--){
   		solve();
   		cout << endl;
   }
}
