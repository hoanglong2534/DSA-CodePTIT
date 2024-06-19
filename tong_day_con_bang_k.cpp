#include<bits/stdc++.h>
using namespace std;

int n , k ;
int a[100], sum = 0 , ok = 0, cnt = 0  ;
int b[100];
vector<int> v;

void kt(){
	for(int i = 1 ; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = 1;
	else {
		a[i] = 1;	
	}
}

int main(){
	cin >> n >> k;
	for(int i = 1 ; i <= n; i++){
		cin >> b[i];
	}
	kt();
	while(!ok){
		sum = 0 ;
		for(int i = 1 ; i <= n; i++){
			if(a[i] == 1){
				sum += b[i];
				v.push_back(b[i]);
			}
		}
		if(sum == k){
			cnt++;
			for(int i = 0; i < v.size(); i++){
				cout << v[i] << " ";
			}
			cout << endl;
		}
		v.clear();
		sinh();
	}
	cout << cnt;
	
}
