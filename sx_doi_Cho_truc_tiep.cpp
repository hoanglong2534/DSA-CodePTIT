#include<bits/stdc++.h>
using namespace std;

void sx(int a[], int n){
	for(int i = 0 ; i < n - 1; i++){
		for(int j = i + 1; j < n ; j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
				
				}
			}
			cout << "Buoc " << i + 1 << ": ";
				for(int u = 0 ; u < n ; u++){
					cout << a[u] << " ";
		
					}
				cout << endl; 
		}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(auto &x : a) cin >> x;
	sx(a , n);	
}
