#include<bits/stdc++.h>
using namespace std;

int n, dem, a[100], ok = 0 ;

void kt(){
	dem = 1;
	a[1] = n;
}

void sinh(){
	int i = dem;
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0) ok = 1;
	else{
		a[i]--;
		int tmp = dem - i + 1;
		dem = i;
		int q = tmp / a[i];
		int r = tmp % a[i];
		for(int j = 1 ; j <= q ; j++){
			a[++dem] = a[i];
		}
		if(r !=0 ){
			a[++dem] = r;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		kt();
		while(!ok){
			cout << "(";
			for(int i = 1 ; i < dem ; i++){
				cout << a[i] << " ";
			}
			cout << a[dem] << ")" << " ";
			sinh();
		}
		cout << endl;
		ok = 0;
	}
}
