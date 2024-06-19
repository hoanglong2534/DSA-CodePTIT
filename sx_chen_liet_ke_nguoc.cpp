#include <iostream>
#include <vector>

using namespace std;

void sx(int a[], int n) {
    vector<vector<int>> v;
    vector<int> tmp; 

    for (int i = 1; i < n; i++) {
        int pos = i - 1, x = a[i];
        while (pos >= 0 && a[pos] > x) {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;

        for(int u = 0 ;  u <= i;  u++){
        	tmp.push_back(a[u]);
		} 
	
        v.push_back(tmp);
        tmp.clear(); 
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << "Buoc " <<  i + 1 << ": ";
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sx(a, n);

    cout << "Buoc 0: " << b[0] << endl;

    return 0;
}
