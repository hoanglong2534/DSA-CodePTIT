#include<bits/stdc++.h>
using namespace std;

int n, m, s, t;
int visited[1005];
int parent[1005];
vector<int> ke[1005];

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (auto y : ke[x]) {
            if (!visited[y]) {
                visited[y] = 1;
                parent[y] = x;
                q.push(y);
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        for (int i = 0; i < 1005; i++) {
            ke[i].clear();
        }
        cin >> n >> m >> s >> t;
        for (int i = 1; i <= m; i++) {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        memset(visited, 0, sizeof(visited));

        BFS(s);
        if (!visited[t]) {
            cout << "-1\n";
        } else {
            vector<int> v;
            while (t != s) {
                v.push_back(t);
                t = parent[t];
            }
            v.push_back(s);
            reverse(v.begin(), v.end());
            for (auto x : v) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
