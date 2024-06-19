#include <bits/stdc++.h>
using namespace std;

int check(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

string solve(string s) {
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i]))
            res += s[i];
        else if (s[i] == '(' || st.empty() || check(s[i]) > check(st.top())) {
            st.push(s[i]);
        } else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                char c = st.top();
                res += c;
                st.pop();
            }
            if (!st.empty() && st.top() == '(')
                st.pop(); 
        } else {
            while (!st.empty() && check(s[i]) <= check(st.top())) {
                char c = st.top();
                res += c;
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        char c = st.top();
        res += c;
        st.pop();
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string s;
        getline(cin, s); 
        cout << solve(s) << endl;
    }
    return 0;
}
