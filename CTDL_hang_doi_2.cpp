#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		
		if(s == "PUSH"){
			int x;
			cin >> x;
			q.push(x);
		}
		
		else if(s == "PRINTFRONT"){
			if(!q.empty()){
				cout << q.front(); 
			}
			else cout << "NONE" ;
		}
		else if(s == "POP"){
			if(!q.empty()){
				q.pop();
			}
		}
		cout << endl;
	}
}
