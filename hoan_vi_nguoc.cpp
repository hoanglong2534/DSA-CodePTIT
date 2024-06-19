#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok = 0;
void kt(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
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
		vector<int> v;
		list<int> l; 
		cin >> n;
		kt();
		int res = 0; 
		while(!ok){
			for(int i = 1; i <= n; i++){
				res = res*10 + a[i]; 
			}
			l.push_front(res);
			sinh();
			res = 0; 
		}
//		for(int i = v.size() - 1; i >= 0;  i--){
//			cout << v[i] << " ";
//		} 
		for(auto x : l) cout << x << " ";
		cout << endl;
		ok = 0;
	}
}
