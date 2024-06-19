#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok = 0;

void kt(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = 6;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 8){
		a[i] = 6;
		--i;
	}
	if(i == 0) ok = 1;
	else{
		a[i] = 8;
	}
}

vector<string> v;

int dk(string str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == '8' && str[i + 1] == '8') {
            return 1;
        }
    }
    return 0;
}

int dk2(string s) {
	int cnt = 0;
	for(int i = 0 ; i < s.size() - 1; i++){
		if(s[i] == '6' && s[i + 1] == '6'){
			cnt++;
			if(cnt > 2) return 1;
		}
		else{
			cnt = 0;
		}
	}
	return 0; 
} 


int main(){
	cin >> n;
	kt();
	while(!ok){
		string res = ""; 
		for(int i = 1 ; i <= n; i++){
			res += to_string(a[i]);
		}
		v.push_back(res);
		sinh();
	}
	
   
    for (int i = v.size() - 1; i >= 0; i--) {
        int check = 0;
        if (v[i][0] != '8' || v[i][n - 1] != '6' || dk(v[i]) || dk2(v[i]) ) {
            v.erase(v.begin() + i);
           
        }
    }
    
   
	for(auto x : v) cout << x << endl;
}
