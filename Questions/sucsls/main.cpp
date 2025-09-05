#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    string makeStrings(string s, int k) {
        int i = 0;
        if (k == 0) return s;
        string str;
        while (s.size() - k + i < s.size()) {
            str += s[s.size() - k + i];
            i++;
        }
        while (i < s.size()) {
            str += s[i - k];
            i++;
        }
        return str;
    }
public:
    bool areRotations(string &s1, string &s2) {
        bool same = false;
        if (s1.size() != s2.size()) return false;
        for (int k = 0; k < s1.size(); k++) {
            string s = makeStrings(s1, k);
            if (s == s2) {
                same=true;
                break;
                
            }
        }
        if(same) return true;
        return false;
    }
};

int main() {
    Solution sol;

    vector<tuple<string, string, bool>> tests = {
        {"abcd", "cdab", true},
      
    };

    int caseNum = 1;
    for (auto &[s1, s2, expected] : tests) {
        bool result = sol.areRotations(s1, s2);
        cout << "Test " << caseNum++ << ": "
             << "s1=\"" << s1 << "\", s2=\"" << s2 << "\" -> "
             << (result ? "true" : "false")
             << " (expected: " << (expected ? "true" : "false") << ")"
             << (result == expected ? " ✅" : " ❌") << "\n";
    }

    return 0;
}
