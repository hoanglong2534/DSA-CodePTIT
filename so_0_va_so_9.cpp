#include<bits/stdc++.h>
using namespace std;

int solve(int n){

	if(n == 0){
		return 0;
	}
	
	queue<int> q;
	q.push(9);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		if(x % n == 0){
			return x;
		}
		else{
			q.push(10 * x);
			q.push(10 * x + 9);
		}
	}
	
}
	
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << solve(n) << endl;
	}
}
