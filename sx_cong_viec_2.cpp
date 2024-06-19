#include<bits/stdc++.h>
using namespace std;

struct job{
	int id, DL, profit;
};

bool cmp(job a, job b){
	return a.profit > b.profit;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		job a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].id >> a[i].DL >> a[i].profit;
		}
		sort(a , a + n , cmp);
		int cnt[10000] = {0};
		int ans = 0, sl = 0;
		for(int i = 0 ; i < n ; i++){
			for(int j = a[i].DL - 1; j >= 0; --j){
				if(cnt[j] == 0){
					ans += a[i].profit;
					cnt[j] = 1;
					sl++;
					break;
				}
			}
		}
		cout << sl << " " <<  ans << endl;
	}
} 
