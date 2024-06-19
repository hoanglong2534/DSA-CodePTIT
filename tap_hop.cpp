#include<bits/stdc++.h>
using namespace std;

int n , k , s , cnt ;

void solve(int idx, int sum , int count){
	if(count == k){
		if(sum == s){
			cnt++;
		}
		return; 
	}
	
	if(idx > n) return;
	if(sum + idx <= s){
		solve(idx + 1, sum + idx , count + 1); 
	}
	solve(idx + 1, sum , count ); 
} 


int main(){
	while(1){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;

		cnt = 0 ;
		solve(1 ,0,0);
		cout << cnt << endl;
		
	}
}
