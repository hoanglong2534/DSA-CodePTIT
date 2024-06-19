#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		for(auto x : s){
			mp[x]++;
		}
		int res = 0 ;
		for(auto x : mp){
			res = max(res , x.second);
		}
		if(s.size() % 2 == 0 && res <= s.size() - res) {
			cout << 1 << endl;
		}
		else if(s.size() % 2 == 1 && res <= (s.size() / 2 + 1)){
			cout << 1 << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}
