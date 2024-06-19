#include<bits/stdc++.h>
using namespace std;

int cnt[10000001] = {0};



int main() {
    int t;
    cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		
		
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}
		sort(a,  a + n);
		for(int i = 0 ; i < n - 1 ; i++){
			for(int j = i + 1 ; j < n ; j++){
				if(cnt[a[j]] > cnt[a[i]]) {
					swap(a[j] , a[i]);
				}
				
			}
			
		}
		
		for(int i = 0 ; i < n - 1 ; i++){
			for(int j = i + 1 ;  j < n ; j++){
				if(cnt[a[i]] == cnt[a[j]] && a[i] > a[j]){
					swap(a[i], a[j]);
				}
			}
		}	
		
			for(auto x : a) cout << x << " ";
			
			for(int i = 0 ; i < n ; i++){
				cnt[a[i]] = 0;
			}
		cout << endl;
		
		}
	}

