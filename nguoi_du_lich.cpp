#include<bits/stdc++.h>
using namespace std;

int n, a[100][100], x[100];
int used[100];
int res = INT_MAX, cmin = INT_MAX , s;

void ql(int i){
	for(int j = 2 ; j <= n ; j++){
		if(used[j] == 0){
			x[i] = j;
			used[j] = 1;
			s += a[x[i - 1]][j];
			if(i == n){
				if(s + a[j][1] < res) {
					res = s + a[j][1];
				}
			}
			else if (s + (n - i + 1) * cmin < res){
				ql(i + 1);
			}
			s -= a[x[i - 1]][j];
			used[j] = 0;
		}
	} 
}
int main(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1; j <= n ; j++){
			cin >> a[i][j];
			if(a[i][j] < cmin && cmin != 0){
				cmin = a[i][j];
			}
		}
	}
	x[1] = 1;
	ql(2);
	cout << res << endl;
	
	
}
