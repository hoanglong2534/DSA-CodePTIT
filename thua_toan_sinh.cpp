#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok;
void kt(){
	for(int i = 1 ; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n/2;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 1;
	else{
		a[i] = 1;
	}
}

int main(){
	cin >> n;
	kt();
	
	if(n % 2 == 0){
		ok = 0;
		while(!ok){
			for(int i = 1; i <= n/2; i++){
				cout << a[i] << " ";
			}
			for(int i = n/2; i>= 1; i--){
				cout << a[i] << " ";
			}
			cout << endl;
			sinh();
		}	
	}
	else{
		ok = 0;
		while(!ok){
			for(int u = 0; u <= 1; u++){
				for(int i = 1; i <= n/2; i++){
				cout << a[i] << " ";
				}
			cout << u << " ";
			for(int i = n/2; i>= 1; i--){
				cout << a[i] << " ";
				}
			}
			cout << endl;
			sinh();
		}
	}

}
