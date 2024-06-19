#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x; 
		multimap<int , int> mp; 
		cin >> n >> x; 
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i]; 
			mp.insert(make_pair(abs(x-a[i]), a[i])) ;
		} 
		
		
		for (auto x : mp) cout << x.second << " ";
		cout << endl;
	} 
}
