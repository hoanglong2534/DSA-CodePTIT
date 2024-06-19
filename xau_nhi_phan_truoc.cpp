#include<bits/stdc++.h>
using namespace std;

string a;

void sinh(){
	int i = a.size() - 1;
	while(i >= 0 && a[i] == '0'){
		a[i] = '1';
		i--;
	}

	if(i >= 0){
		a[i] = '0';
	}
	cout << a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> a;
		sinh();
		cout << endl;
		
	}
}
