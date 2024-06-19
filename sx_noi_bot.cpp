#include<bits/stdc++.h>
using namespace std;

void sx(int a[], int n){
	int ok;
	for(int i = 0 ; i < n ; i++){
		ok = 0;
		for(int j = 0; j < n - i - 1; j++){
			if(a[j + 1] < a[j]){
				swap(a[j + 1], a[j]);
				ok = 1;
			}	
		}
		if(!ok){
			break;
		}

		cout << "Buoc " << i + 1 << ": ";
		for(int u = 0; u < n; u++){
			cout << a[u] << " ";
		}
		cout << endl;
		
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	sx(a,n);
}
