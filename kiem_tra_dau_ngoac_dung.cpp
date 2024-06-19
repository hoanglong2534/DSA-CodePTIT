#include<bits/stdc++.h>
using namespace std;

void solve(){
		stack<int> st;
		string s;
		cin >> s;
		for(int i = 0 ; i < s.size() ; i++){
			if(s[i] == ')' && !st.empty() && s[st.top()] == '('){
				st.pop();
			}
			else if(s[i] == ']' && !st.empty() && s[st.top()] == '['){
				st.pop();
			}
			else if(s[i] == '}' && !st.empty() && s[st.top()] == '{'){
				st.pop();
			}
			else {
				st.push(i);
			}
		}
		cout << (st.empty() ? "YES" : "NO");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
 	}
}
