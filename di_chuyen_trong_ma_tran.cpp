#include <bits/stdc++.h>
using namespace std;

int m , n, a[500][500];
int ok[500][500];
vector<string> v;
string s = "";

void ql(int i, int j, string s){
	if(i == m && j == n){
		v.push_back(s);
	}

	if(i < m && !ok[i + 1][j]){
		ok[i][j] = 1;
		ql(i + 1, j , s + "U");
		ok[i][j] = 0;
	}
	if(j < n && !ok[i][j + 1]){
		ok[i][j] = 1;
		ql(i, j + 1, s + "D");
		ok[i][j] = 0;
	}
	if(i > m || j > n ) return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(ok, 0 , sizeof(ok));
		cin >> m >> n;
		for(int i = 1 ; i <= m ; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		ql(1 , 1 , s);
		cout << v.size() << endl;
		v.clear();
		
	}
	
	
}
