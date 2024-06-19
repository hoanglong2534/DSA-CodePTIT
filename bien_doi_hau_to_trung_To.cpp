#include<bits/stdc++.h>
using namespace std;

int check(char c){
	return (c == '+' || c == '/' || c == '*' || c == '-');
}

string xl(string s){
	stack<string> st;
	for(int i = 0 ; i < s.size() ; i++){
		if(isalpha(s[i])) st.push(string(1, s[i]));
		else if(check(s[i])){
			string o1 = st.top(); st.pop();
			string o2 = st.top(); st.pop();
			string tmp = '(' + o2 + string(1, s[i]) + o1 + ')';
			st.push(tmp);
		}
	}
	return st.top();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << xl(s) << endl;
	}
}
