#include<bits/stdc++.h>
using namespace std;


int main(){
	int n ; 
	cin >> n;
	vector<long long> a(n + 1);
	vector<long long> x, y;
	int cnt1 = 0, cnt2 = 0;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		if(i % 2 == 1){
			x.push_back(a[i]);
			cnt1++;
		}
		else{
			y.push_back(a[i]);
			cnt2++;
		}
	}
	sort(x.begin(), x.end());
	sort(y.rbegin(), y.rend());
	
	
   for(int i = 0 ; i < min(cnt1, cnt2); i++){
   	cout << x[i] << " " << y[i] << " ";
   }

	if(cnt1 > min(cnt1 , cnt2)){
		for(int i = min(cnt1, cnt2); i < cnt1; i++){
			cout << x[i] << " ";
		}
	}
	else if(cnt2 > min(cnt1 , cnt2)){
		for(int i = min(cnt1, cnt2); i < cnt2 ; i++){
			cout  << y[i] << " ";
		}
	}
}
