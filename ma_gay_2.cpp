#include<bits/stdc++.h>
using namespace std;
	
string ans = ""; 
string graytonp(string s){
	for(int i = 1 ; i < s.size() ; i++){
	 	if(s[i] != ans[i - 1]){
	 		ans += "1";
		 }
		else {
			ans += "0";
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ans += s[0]; 
		cout << graytonp(s);
		cout << endl;
		ans = "";
	}
	return 0;
}
