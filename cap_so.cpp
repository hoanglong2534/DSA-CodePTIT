#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0 ; i < n - 1; i++){
		for(int j = i + 1; j < n ; j++){
			if(a[i] > a[j] && a[j] % 2 == 0 && a[i] % 2 == 0){
				for(int k = i + 1; k < j; k++){
					if(a[k] % 2 == 1){
						cnt++;
					}
				}
			}
		}
	}
	cout << cnt << endl;
}
