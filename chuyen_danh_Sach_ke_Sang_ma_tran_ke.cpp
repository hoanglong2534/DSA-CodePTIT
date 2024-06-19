#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005]; 
int a[1005][1005]; 

int main(){
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1 ; i <= n ; i++){
		string s;
		getline(cin , s);
		string tmp;
		tmp.clear();
		stringstream ss(s);
		while(ss >> tmp){
			ke[i].push_back(stoi(tmp));
		}
	}

 for (int i = 1; i <= n; i++) {
        for (int j : ke[i]) {
            a[i][j] = 1;
            a[j][i] = 1;
        }
    }

	
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
} 

