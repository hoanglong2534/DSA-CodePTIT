#include<bits/stdc++.h>
using namespace std;

int n, a[101], ok = 0;
int sum = 0;

void ql(int i, int s){
	if(s == sum/2){
		ok = 1;
		return;
	}
	if(ok == 1) return;
	for(int j = i; j <= n ; j++){
		if(s + a[j] <= sum/2){
			ql(i + 1, s + a[j]);
		}
	}
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
		}
		if(sum % 2 == 1) cout << "NO\n";
		else{
			ql(1,0);
			if(!ok) cout << "NO\n";
			else cout << "YES\n";
		}
		ok = 0 ;
		sum = 0;
		
	}
}
