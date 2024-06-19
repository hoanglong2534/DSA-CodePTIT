#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok = 0 ;
char c[26] = {'A', 'B', 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X', 'Y', 'Z'};
string s;

void kt(){
	for(int i = 1 ; i <= n; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = n ;
	while(i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0) ok = 1;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		sort(a + i + 1, a + n + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
		cin >> s;
		n = s.size();
		kt();
		while(!ok){
			for(int i = 1 ; i <= n; i++){
				cout << c[a[i] - 1];
			}
			cout << " ";
			sinh();
		}
		ok = 0 ;
		cout << endl;
	}
}
