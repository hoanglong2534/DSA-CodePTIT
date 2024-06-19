#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		stack<char> st;
		string s;
		cin >> s;
			int ok = 0;
		for(auto x : s){
			if(x != ')'){
				st.push(x);
			}
		
		while(!st.empty()){
			char c = st.top();
			if(c == '+' || c == '-' || c == '/' || c == '*'){
				ok = 1;
			}
			st.pop();
		}
		
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
		
	}

} 
