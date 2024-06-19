#include<bits/stdc++.h>
using namespace std;

char c;
string s;

int pa(char c){
    return (c != 'A' && c != 'E');
}

int check(string s){
    for(int i = 0 ; i < s.size() - 2 ; i++){
        if(pa(s[i]) && !pa(s[i + 1])){
            if(pa(s[i + 2])){
                return 0;
            }
        }
    }
    return 1;
}

void sinh(string ans , string res){
    if(res.empty()){
        if(check(ans)){
            cout << ans << endl;
        }
        return;
    }
    for(int i = 0; i < res.size(); i++){
        string x = ans + res[i];
        string y = res.substr(0, i) + res.substr(i + 1);
        sinh(x,y);
    }
}

int main(){
    cin >> c;
    string res = "";
    for(char ch = 'A'; ch <= c; ch++){
        res += ch;
    }
    sinh("", res);
    return 0;
}
