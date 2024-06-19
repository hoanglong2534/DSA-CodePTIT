#include<bits/stdc++.h>
using namespace std;
int n , k , m , x[100] , ok = 0 ;
int a[100];

void kt(){
	for(int i = 1; i <= k; i++){
		x[i] = i; 
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && x[i] == m - k + i){
		i--;
	}
	if(i == 0) ok = 1;
	else{
		x[i]++;
		for(int j = i + 1; j <= k; j++){
			x[j] = x[j - 1] + 1;
		}
	}
}

int main(){
	cin >> n >> k;
	set<int>  s;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		s.insert(a[i]);
	} 
	m = s.size();
	int b[10000] = {0};
	int idx = 1;
	for(auto x : s){
		b[idx++] = x;
	}
	kt();
	while(!ok){
		for(int i = 1; i <= k; i++){
			cout << b[x[i]] << " ";
		}
		cout << endl;
		sinh();
	}

} 
