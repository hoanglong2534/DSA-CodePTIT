#include <iostream>
using namespace std;

char c;
int k;
string s;

void ql(char i){
	for(int j = i; j <= c; j++){
		s.push_back(j);
		if(s.size() == k){
			cout << s << endl;
		} 
		else{
			ql(j); 
		}
		s.pop_back(); 
	} 
}

int main(){
	cin >> c >> k;
	ql('A'); 
} 
