#include<bits/stdc++.h>
using namespace std;

vector<string> res;

void kt(){
	queue<string> q;
	q.push("1");
	res.push_back("1");
	while(res.size() < 10000){
		string x = q.front();
		q.pop();
		res.push_back(x + "0");
		res.push_back(x + "1");
		q.push(x + "0");
		q.push(x + "1");
	}
}

int main(){
	kt();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0 ; i <= n - 1 ; i++){
			cout << res[i] <<  " ";
		}	
		cout << endl;
	}
}
