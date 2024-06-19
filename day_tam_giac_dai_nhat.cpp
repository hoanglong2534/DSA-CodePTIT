#include <iostream>
#include <vector>

using namespace std;

bool isTriangleSubsequence(const vector<int>& nums) {
    int n = nums.size();

    if (n < 3) {
        return false;
    }

    bool increasing = false;
    bool decreasing = false;

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] < nums[i + 1]) {
            increasing = true;
        } else if (nums[i] > nums[i + 1]) {
            decreasing = true;
        }

        if (increasing && decreasing) {
            return true;
        }
    }

    return false;
}

void backtrack(const vector<int>& nums, int start, vector<int>& path, int& maxLength) {
    if (path.size() >= 3 && isTriangleSubsequence(path)) {
        maxLength = max(maxLength, static_cast<int>(path.size()));
    }

    int n = nums.size();
    for (int i = start; i < n; i++) {
        path.push_back(nums[i]);
        backtrack(nums, i + 1, path, maxLength);
        path.pop_back();
    }
}

int findLongestTriangleSubsequence(const vector<int>& nums) {
    int maxLength = 0;
    vector<int> path;

    backtrack(nums, 0, path, maxLength);

    return maxLength;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = findLongestTriangleSubsequence(A);
        cout << result << endl;
    }

    return 0;
}
