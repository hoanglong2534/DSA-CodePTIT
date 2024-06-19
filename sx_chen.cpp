#include<bits/stdc++.h>
using namespace std;

void sx(int a[], int n){
	for(int i = 1; i < n ; i++){
		int pos = i - 1, x = a[i];
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		
	
		  cout << "Buoc " << i  << ": ";
        for (int u = 0; u <= i; u++) {
            cout << a[u] << " ";
        }
        cout << endl;
	}
	
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++) cin >> a[i];
		cout << "Buoc 0: " << a[0] << endl;
	sx(a , n);
}
