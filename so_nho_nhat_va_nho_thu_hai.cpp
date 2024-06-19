#include<bits/stdc++.h>
using namespace std;

int check(int a[], int n){
	set<int> s;
	for(int i = 0 ; i < n; i++){
		s.insert(a[i]);
	}

	if(s.size() == 1){
		return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		if(check(a , n)){
			sort(a, a + n);
			cout << a[0] << " " << a[1];
		}	
		else{
			cout << "-1";
		}
		cout << endl;
	
		
	}
	
}
