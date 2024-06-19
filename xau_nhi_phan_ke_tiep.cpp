#include<bits/stdc++.h>
using namespace std;

int n, a[1001];
string s;

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) {
		for(int j = 1; j <= n; j++){
			a[j] = 0;
		}	
	}
	
	else{
		a[i] = 1;	
	}
	for(int j = 1; j <= n; j++){
			cout << a[j];
		}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
	 	cin >> s;
		n = s.size();
		for(int i = 0 ; i < n; i++){
			a[i + 1] = s[i] - '0';
 		}
		
		sinh();
		cout << endl;
	
	}
}
