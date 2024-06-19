#include <bits/stdc++.h>
using namespace std;

void sx(vector<int>& a, int n) {
    vector<vector<int>> v;
    vector<int> tmp;
    int ok;

    for (int i = 0; i < n; i++) {
        ok = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j + 1] < a[j]) {
                swap(a[j + 1], a[j]);
                ok = 1;
            }
        }
        if (!ok) {
            break;
        }

        for (int u = 0; u < n; u++) {
            tmp.push_back(a[u]);
        }
        v.push_back(tmp);
		
		tmp.clear();
     
    }


		for(int i = v.size() - 1; i >= 0; i--){
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n ; j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sx(a, n);
        cout << endl;
    }
}
