#include <iostream>
using namespace std;

int find_smallest_multiple(int N) {
    int remainder = 0;
    for (int i = 1; i <= N; i++) {
        remainder = (remainder * 10 + 9) % N;
        if (remainder == 0) {
            return i * 9;
        }
    }
    return -1;  // Không t?m th?y s? th?a m?n
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int result = find_smallest_multiple(n);
        cout << result << endl;
    }
    return 0;
}
