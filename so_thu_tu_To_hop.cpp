#include <iostream>
#include <vector>

using namespace std;

int n, k, ok = 0 ;
vector<vector<int>> v;

void kt(){
    vector<int> tmp;
    for(int i = 1 ; i <= k; i++){
        tmp.push_back(i);
    }
    v.push_back(tmp);
}

void sinh(){
    int i = k - 1;
    while(i >= 0 && v.back()[i] == n - k + i + 1){
        i--;
    }
    if(i < 0) ok = 1;
    else{
        v.back()[i]++;
        for(int j = i + 1; j < k; j++){
            v.back()[j] = v.back()[j - 1] + 1;
        }
        v.push_back(v.back());
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        v.clear();
        kt();
        while(!ok){
            sinh();
        }
        vector<int> b(k);
        for(int i = 0 ; i < k; i++){
            cin >> b[i];
        }
        for(int i = 0 ; i < v.size(); i++){
            if(v[i] == b){
                cout << i + 2;
                break;
            }
        }
        cout << endl;
        ok  = 0;
    }
    return 0;
}
