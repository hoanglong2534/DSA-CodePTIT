#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok = 0 ;
int cnt = 0 , b[100];

void sinh(){
	
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) {
		cout << k << endl;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k ; j++){
			a[j] = a[j - 1] + 1;
		}
			
		for(int i = 1; i <= k; i++){
			for(int j = 1; j <= k; j++){
				if(a[i] == b[j]){
					cnt++;
			}
		}
	}
	

	cout << k - cnt << endl;	
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1 ; i <= k; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sinh();
		ok = 0;
		cnt = 0;
		
	}
}
