#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	stack<int> st;
	cin >> n;
	int a[n], d[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		while(!st.empty() && a[i] > a[st.top()]){
			d[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		d[st.top()] = -1;
		st.pop();
	}
	for(auto x : d) cout << x << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
