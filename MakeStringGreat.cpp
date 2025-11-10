#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (st.empty()) {
                st.push(ch);
            } 
            else if ((char)(st.top() - 32) == ch || (char)(st.top() + 32) == ch) {
                st.pop();
            } 
            else {
                st.push(ch);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.makeGood(s);
    return 0;
}
