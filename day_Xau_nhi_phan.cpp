#include<bits/stdc++.h>
using namespace std;

string f[100] = {""};

void fb() {
	f[1] = "0";
	f[2] = "1";
	for(char i = 3; i < 93; i++){
		f[i] = f[i - 2] + f[i - 1];
	} 
	
	for(auto x : f){
		cout <<  x  << endl;
	}
}
int main(){
	fb();
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		
	}
}
