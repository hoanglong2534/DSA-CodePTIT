#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	queue<int> q;
	while(t--){
		string s;
		cin >> s;
		
		if(s == "PUSHFRONT"){
			vector<int> v;
			v.clear();
			int x;
			cin >> x;
			if(q.size() > 0){
				while(!q.empty()){
					int y = q.front();
					v.push_back(y);
					q.pop();
				}
				q.push(x);
				for(int i = 0 ; i < v.size(); i++){
					q.push(v[i]);
				}
			}
			else{
					q.push(x);
			}
		
		}
		else if (s == "PRINTFRONT"){
			if(!q.empty()){
				cout << q.front() << endl;
			}
			else cout << "NONE" << endl;
		}
		else if(s == "POPFRONT"){
			if(!q.empty()){
				q.pop();
			}
		}
		else if(s == "PUSHBACK"){
			int x;
			cin >> x;
			q.push(x);
			
		}
		else if(s == "PRINTBACK"){
			if(!q.empty()){
				cout << q.back() << endl;
			}
			else cout << "NONE" << endl;
		}
		else if(s == "POPBACK"){
			vector<int> res;
			res.clear();
			if(!q.empty()){
					while(q.size() > 1){
					int x = q.front();
					res.push_back(x);
					q.pop();
			}
			q.pop(); 
			} 
			for(int i = 0 ; i < res.size(); i++){
				q.push(res[i]);
			}
		}
		

	}
} 
