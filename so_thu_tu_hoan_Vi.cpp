#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok  = 0 ;
vector<vector<int>> v;

void kt(){
	vector<int> tmp;
	for(int i = 1 ; i <= n; i++){
		a[i] = i;
		tmp.push_back(a[i]); 
	}
	v.push_back(tmp);

}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0) {
		ok = 1;
	}
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		sort(a + i + 1, a + n + 1);
		
		vector<int> tmp;
		for(int u = 1; u <= n; u++){
			tmp.push_back(a[u]);
		} 
		v.push_back(tmp);
	}	
}
int check(vector<int> e, vector<int> k){
	for(int i = 0 ; i < e.size(); i++){
		if(e[i] != k[i]) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> k(n + 1); 
		for(int i = 0 ; i < n ; i++) cin >> k[i]; 
		
		kt();
		while(!ok){
			sinh();
		}
		for(int i = 0 ; i < v.size(); i++){
			if(check(v[i], k)){
				cout << i + 1;
				break;
			}
		}
		cout << endl;
		ok = 0;
		v.clear(); 
	}
}
