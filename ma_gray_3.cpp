#include<bits/stdc++.h>
using namespace std;

void nptogray(string s){
	for(int i = 1 ; i < s.size(); i++){
		if(s[i] != s[i - 1]){
			cout << "1";
		}
		else {
			cout << "0";
		}
	}	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << s[0];
		nptogray(s);
		cout << endl;
	}
	
}
