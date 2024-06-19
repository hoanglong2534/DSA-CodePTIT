#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	stack<int> st;
	
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int x;
			cin >> x;
			st.push(x);
		}
		else if(s == "PRINT"){
			if(!st.empty()){
				cout << st.top() << endl;
			}
			else cout << "NONE\n";
		}
		else if(s == "POP"){
			if(!st.empty()){
				st.pop();
			}
		}
	}
} 
