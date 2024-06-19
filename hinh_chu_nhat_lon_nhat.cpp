#include<bits/stdc++.h>
using namespace std;

#define ll long long

void nhobenphai(ll a[], int n, ll b[]){
	stack<int> st;
	for(int i = 0 ; i < n ; i++){
		while(!st.empty() && a[i] < a[st.top()]){
			b[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		b[st.top()] = n;
		st.pop();
	}
}

void nhobentrai(ll a[], int n, ll c[]){
	stack<int> st;
	for(int i = n - 1; i >= 0 ; i--){
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
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n], b[n], c[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		nhobenphai(a , n , b);
		nhobentrai(a , n , c);
		
		long long res = INT_MIN;
		for(int i = 0 ; i < n ; i++){
			
			res = max (res, (b[i] - c[i] - 1) * a[i]);
		}
		cout << res << endl;
	} 
} 
