#include<bits/stdc++.h>
using namespace std;


vector<string> v;

void xl(){
	queue<string> q;
	q.push("6");
	q.push("8");
	while(!q.empty()){
		string u = q.front();
		q.pop();
		if(u.size() > 17) break;
		v.push_back(u);
		q.push(u + "6");
		q.push(u + "8");
	}
} 

void solve(){
	int n; cin >> n;
	vector<string> res;
	for(auto x : v){
		if(x.size() > n){
			break;
		}
		res.push_back(x);
	}
	cout << res.size() << endl;
	for(int i = res.size() - 1; i>=0; i--){
		cout << res[i] << " ";
	}
	cout << endl;
}

int main(){
	xl();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
