#include<bits/stdc++.h>
using namespace std;

int n, a[10000], k;

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	} 
	if(i == 0) {
		for(int j = 1 ; j <= k ; j++){
			cout << j <<" ";
		}
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
		
		for(int u = 1 ; u <= k ; u++){
			cout << a[u] << " ";
		} 
	}
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1 ; i <= k ; i++){
			cin >> a[i];
		}
		sinh();
		cout << endl;
		
	}
}
