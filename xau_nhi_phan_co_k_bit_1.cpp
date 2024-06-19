#include<bits/stdc++.h>
using namespace std;

int n , a[100], ok = 0 , k;
void kt(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 1;
	else{
		a[i] = 1;
	}
}

int check(){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		cnt += a[i];
	}
	return cnt == k;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		kt();
		while(!ok){
			if(check()){
				for(int i = 1; i <= n; i++){
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
		cout << endl;
		ok = 0;
	}
}
