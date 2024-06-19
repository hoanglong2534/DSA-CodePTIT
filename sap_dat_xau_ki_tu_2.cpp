#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int d;
		string s;
		cin >> d >> s;
		map<char, int> mp;
		for(auto x : s){
			mp[x]++;
		}
		int res = 0 ;
		for(auto x : mp){
			res = max(res , x.second);
		}
		
		if((res - 1) * (d - 1) > s.size() - res){
			cout << -1 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
}
