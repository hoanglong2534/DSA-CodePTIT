#include<bits/stdc++.h>
using namespace std;

int solve(long long n){
	int cnt = 0 ;
	queue<long long> q;
	q.push(1);
	while(!q.empty()){
		long long x = q.front();
		q.pop();
		if(x <= n){
			cnt++;
			q.push(10 * x);
			q.push(10 * x + 1);
		}
	}
	return cnt;
}

int main(){
	int t;
	cin >> t;
	
	while(t--){
		long long n;
		cin >> n;
		cout << solve(n) << endl;
		
	}
} 
