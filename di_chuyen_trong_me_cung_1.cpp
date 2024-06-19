#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector<string> v;
string s = "";
int ok = 0;

void ql(int i, int j, string s){
	if(!a[1][1] || !a[n][n]) return;
	if(i == n && j == n && a[i][j]){
		v.push_back(s);
		ok = 1;
		return;
	}
	if(i < n && a[i + 1][j]){
		ql(i + 1, j, s + "D");
	}
	if(j < n && a[i][j + 1]){
		ql(i, j + 1, s + "R");
	}
	if(i > n || j > n || i < n && i < n && !a[i][j + 1] && !a[i + 1][j]){
		return;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		ql(1 , 1 , s);
		if(!ok) cout << "-1\n";
		else{
			sort(v.begin(), v.end());
			for(auto x  :  v){
				cout << x << " ";
			}
		}
		cout << endl;
		ok = 0;
		v.clear();
		
	}
}
