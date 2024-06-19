#include<bits/stdc++.h>
using namespace std;

int xl(string s){
	stack<int> st;
	int cnt = 0 ;
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i] == '(') st.push(i);
		else{
			if(st.empty()){
				cnt++;
				st.push(i);
			}
			else{
				st.pop();
			}
		}
	}
	cnt += st.size() / 2;
	return cnt;
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
