#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	string s;
	while(cin >> s){
		
	if(s == "push"){
		int x;
		cin >> x;
		st.push(x);
	} 
	else if(s == "show"){
		vector<int> v;
		v.clear();
		while(!st.empty()){
			int x = st.top();
			v.push_back(x);
			st.pop();
		}
		for(int i = v.size() - 1; i >= 0 ; i--){
			st.push(v[i]);
			cout << v[i] << " ";
		}
		if(st.empty()) cout << "empty\n";
	}
	else if(s == "pop"){
		st.pop();
	}
	cout << endl; 
	}
} 
