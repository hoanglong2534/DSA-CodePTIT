#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void sinh(){
	while(1){
		for(auto x : a) cout << x << " ";
		cout << endl;
		
		int i = n - 2;
		while(i >= 0 && a[i] > a[i + 1]){
			--i;
		}
		if(i == -1) break;
		else{
			int j = n - 1;
			while(a[i] > a[j]) --j;
			swap(a[i], a[j]);
			
			int l = i + 1, r = n - 1;
			while(l < r){
				swap(a[l], a[r]);
				l++; r--;
			}
		}			
	}
} 

int main(){
	cin >> n;
	a.resize(n); 
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	sinh();
}


