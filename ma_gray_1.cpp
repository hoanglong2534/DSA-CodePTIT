#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok  = 0 ;
void kt(){
	for(int i = 1 ; i <= n ;i++){
		a[i] = 0 ;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0 ;
		--i;
	}
	if(i == 0) ok = 1;
	else{
		a[i] = 1;
	}
}

string nptogray(string s){
	string ans = "";
	ans += s[0];
	for(int i = 1 ; i < s.size(); i++){
		if(s[i] != s[i - 1]){
			ans += "1";
		}
		else{
			ans += "0";
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		kt();
		vector<string> v;
		while(!ok){
			string res = "";
		
			for(int i = 1 ; i <= n; i++){
				res += to_string(a[i]);
			}
			v.push_back(nptogray(res));
			res.clear();
			sinh();
		}
		for(auto x : v) cout << x << " ";
		cout << endl;
		v.clear();
		ok = 0 ;
	}
}
