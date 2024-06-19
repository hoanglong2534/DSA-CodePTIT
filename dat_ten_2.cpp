#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok = 0 ;
char x[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void kt(){
	for(int i = 1; i <= k; i++){
		a[i] = i ;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 1;
	else{
		a[i]++;
		for(int j = i + 1; j <= n ; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		kt();
		while(!ok){
			for(int i = 1; i <= k; i++){
				cout << x[a[i] - 1] ;
			}
			cout << endl;
			sinh();
		}
		ok = 0 ; 
	}
}
