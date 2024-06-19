#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stack<string> st;
		stringstream ss(s);
		string tmp;
		vector<string> res;
		res.clear();
		while(ss >> tmp){
			res.push_back(tmp);
		}
		for(auto x : res){
			st.push(x);
		}
		while(!st.empty()){
			string x = st.top();
			st.pop();
			cout << x << " ";
		}
		cout << endl;
	}
} 
