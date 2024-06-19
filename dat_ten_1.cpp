#include<bits/stdc++.h> 
using namespace std;

int n , k , x[100];
vector<string> tmp;
vector<string> res; 
vector<vector<string>> v;

void ql(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i ; j++){
		x[i] = j;
		if(i == k){
			 for(int u = 1 ; u <= k ; u++){
			 	res.push_back(tmp[x[u]]);
			 }
			 sort(res.begin(), res.end());
			 v.push_back(res);
			 res.clear(); 
		}
		else{
			ql(i + 1);
		}
	}
}

int main(){
	cin >> n >> k;
	set<string> se;
	for(int i = 1 ; i <= n; i++){
		string s;
		cin >> s;
		se.insert(s);
	}
	tmp.push_back("");
	for(auto x : se){
		tmp.push_back(x);
	} 
	n =  tmp.size() - 1; 
	ql(1); 
	sort(res.begin(), res.end());
	for(auto x : v){
		for(auto i : x){
			cout << i << " ";
		}
		cout << endl;
	}
}
