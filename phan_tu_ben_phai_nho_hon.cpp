#include<bits/stdc++.h>
using namespace std;

void ok (int a[], int n, int b[], int c[]){
	stack<int> st;
	for(int i = 0 ; i < n ; i++){
		while(!st.empty() && a[i] > a[st.top()]){
			b[st.top()] = i;
			st.pop();
		} 
		st.push(i);
		
	}
	while(!st.empty()){
			b[st.top()] = -1;
			st.pop();
		}
	for(int i = 0 ; i < n ; i++){
		while(!st.empty() && a[i] < a[st.top()]){
			c[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		c[st.top()] = -1;
		st.pop();
	}
	for(int i = 0 ; i < n ; i++){
		if(b[i] == -1 || c[b[i]] == -1){
			cout << -1 << " ";
		}
		else cout << a[c[b[i]]] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n], c[n];
		for(int i = 0 ; i < n ; i++ ){
			cin >> a[i]; 
		} 
		ok(a,n,b,c);
	}
}
