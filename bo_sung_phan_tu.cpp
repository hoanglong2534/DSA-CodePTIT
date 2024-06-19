#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(auto &x : a) cin >> x;
		
		int L = *min_element(a.begin(), a.end());
		int R = *max_element(a.begin(), a.end());
		int cnt = 0 ;
		
		for(int i = L; i <= R; i++){
			if(find(a.begin(), a.end(), i) == a.end()){
				cnt++;
			}
		}
		cout << cnt << endl;
			
	}
	
}
