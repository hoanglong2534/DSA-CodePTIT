#include<bits/stdc++.h>
using namespace std;

int n, x[100], used[100];
vector<int> tmp;
vector<vector<int>> v;

void ql(int i){
	if(i > n){
		for(int j = 1 ; j <= n ; j++){
			tmp.push_back(x[j]);
		}
		v.push_back(tmp);
		tmp.clear();
	}
	else{
		for(int j = 1 ; j <= n ; j++){
			if(used[j] == 0 && (i == 1 || abs(j - x[i - 1]) != 1)){
				x[i] = j;
				used[j] = 1;
				ql(i + 1);
				used[j] = 0;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ql(1);
		for(auto x : v){
			for(auto i : x){
				cout << i;
			}
			cout << endl;
		}
		
		cout << endl;
		v.clear();
	}
} 
