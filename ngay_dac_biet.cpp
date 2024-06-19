#include<bits/stdc++.h>
using namespace std;

string s(8, '0');
vector<string> v; 

void ql(int i){
	for(int j = 0 ; j <= 1 ; j++){
		if(j == 0) s[i] = '0';
		else{
			s[i] = '2';
		}
		
		if(i == 7) {
			int d = stoi(s.substr(0 , 2));
			int m = stoi(s.substr(2, 2));
			int y = stoi(s.substr(4));
			if(d > 0 && d <= 31 && m > 0 && m <= 12 && y >= 2000){
				string tmp = s;
				tmp.insert(2 , 1 ,'/');
				tmp.insert(5, 1 , '/');
				v.push_back(tmp);
				tmp.clear();
			}
		}
		else{
			ql(i + 1);
		}
	}
}

int main(){
	ql(0);
	sort(v.begin(), v.end());
	for(auto x : v) cout << x << endl;
	
}
