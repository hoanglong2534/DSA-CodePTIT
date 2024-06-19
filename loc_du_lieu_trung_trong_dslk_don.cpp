#include<bits/stdc++.h>
using namespace std;

int cnt[100000]= {0};
int main(){
	int n;
	cin >> n;
	int a[n];
	vector<int> v;
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
		if(cnt[a[i]] == 0){
			v.push_back(a[i]);
		}
		cnt[a[i]]++;
	}
	for(auto x : v) cout << x << " ";	
}
