#include<bits/stdc++.h>
using namespace std;

void check(){
		map<int,int> mp;
		int n;
		vector<int> a(n);
		
		cin >> n;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			mp[a[i]]++;	
		}
		for(int i = 0; i < n ; i++){
			if(mp[a[i]] >= 2){
				cout << a[i];
				return;
			}
		}
		
		cout << "NO";
	
	}
int main(){
	int t;
	cin >> t;
	while(t--){	
		check();
		cout << endl;
		}
}

