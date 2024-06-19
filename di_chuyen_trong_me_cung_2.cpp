#include<bits/stdc++.h>
using namespace std;

int n, a[100][100], ok[100][100];
vector<string> v;
string s = "";

void ql(int i, int j, string s){
	if(a[1][1] == 0 || a[n][n] == 0){
		return;
	}
	if(i == n && j == n && a[i][j]){
		v.push_back(s);
		return;
	}
	if(i > 1 && a[i - 1][j] == 1 && ok[i - 1][j] == 0){
		ok[i][j] = 1;
		ql(i - 1, j , s + "U");
		ok[i][j] = 0;
	}
	if(i < n && a[i + 1][j] && !ok[i + 1][j]){
		ok[i][j] = 1;
		ql(i + 1, j , s + "D");
		ok[i][j] = 0;
	}
	if(j > 1 && a[i][j - 1] && !ok[i][j - 1]){
		ok[i][j] = 1;
		ql(i, j - 1, s + "L");
		ok[i][j] = 0;
	}
	if(j < n && a[i][j + 1] && !ok[i][j + 1]){
		ok[i][j] = 1;
		ql(i , j + 1 , s + "R");
		ok[i][j] = 0;
	}
	if(i > n || j > n || i < n && j < n && !a[i][j + 1] && !a[i][j - 1] && !a[i + 1][j] && !a[i - 1][j]){
		return;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(ok, 0, sizeof(ok));
		cin >> n;
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n; j++){
				cin >> a[i][j];
			}
		}
		ql(1 , 1 , s);
		if(v.size() == 0 ) cout << "-1\n";
		else{
			sort(v.begin(), v.end());
			for(auto x : v) cout << x << " ";
		}
		cout << endl;
		v.clear();
	}
}
