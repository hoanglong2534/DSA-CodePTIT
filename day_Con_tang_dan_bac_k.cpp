#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok = 0 ;
vector<vector<int>> v;
int check = 1 ;

void kt(){
	for(int i = 1 ; i <= k ; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k ;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if(i == 0) ok = 1;
	else {
		a[i]++;
		for(int j = i + 1 ; j <= k ; j++){
			a[j] = a[j - 1] + 1;
		}	
	}
}

int tang(vector<int> v){
	for(int i = 1 ;  i < v.size(); i++){
		if(v[i] <= v[i - 1]){
			return 0;
		}
	}
	return 1;
} 

int main(){
	cin >> n >> k;
	int b[200];
	for(int i = 1 ; i <= n ; i++){
		cin >> b[i];
	}

	kt();
	vector<int> tmp;
	while(!ok){
		for(int i = 1 ; i <= k ; i++){
			tmp.push_back(b[a[i]]);
		}
		if(tang(tmp)){
			v.push_back(tmp);
		}
		tmp.clear();
		sinh();
	}
	
	cout << v.size() << endl;
}
