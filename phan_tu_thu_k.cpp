#include<bits/stdc++.h>
using namespace std;

int merge(int a[], int n, int b[], int m, int k){
	int i = 0 , j = 0, cnt = 0 , ans = -1;
	while(i < n && j < m){
		if(a[i] < b[j]){
			cnt++;
			if(cnt == k){
				ans = a[i];
				break;
			}	
			++i;
		}
		else{
			cnt++;
			if(cnt == k){
				ans = b[j];
				break;
			}
			j++;
		}
	}
	while(i < n){
		cnt++;
		if(cnt == k){
			ans = a[i];
			break;
		}
		i++;
	}
	while(j < m){
		cnt++;
		if(cnt == k){
			ans = b[j];
		}
		j++;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m , n , k;
		cin >> m >> n >> k;
		int a[m], b[n];
		for(int i = 0 ; i < m ; i++) cin >> a[i];
		for(int i = 0 ; i < n ; i++) cin >> b[i];
		cout << merge(a,m,b,n,k) << endl;
		
	}
}
