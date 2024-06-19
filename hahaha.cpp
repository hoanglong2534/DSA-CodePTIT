#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok = 0 ;
char c[2] = {'H', 'A'};
vector<string> v;

void kt(){
	for(int i = 1 ; i <= n; i++){
		a[i] = 0 ;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 1;
	else{
		a[i] = 1;
	}
}

int dk1(string& s){
	for(int i = 0 ; i < s.size(); i++){
		if(s[0] == 'H' && s[s.size() - 1] == 'A'){
			return 1;
		}
		return 0;
	}
	return 0;
} 

int dk2(string& s){
	int cnt = 0 ;
	for(int i = 0 ; i < s.size(); i++){
		if(s[i] == 'H' && s[i + 1] == 'H'){
			cnt++;
		}
	}
	if(cnt > 0) return 0;
	else return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		kt();
		while(!ok){
			string res = "";
			for(int i = 1 ; i <= n; i++){
				res +=(c[a[i]]);
			}
			v.push_back(res);
			res.clear();
			sinh();
		}
		
		for(int i = v.size() - 1; i >= 0; i--){
			if(!dk1(v[i]) || !dk2(v[i])){
				v.erase(v.begin()  + i);
			}
		}
		sort(v.begin(), v.end());
		for(auto x : v) cout << x << endl;
		
		ok = 0; 
		v.clear();
	}
	
}
