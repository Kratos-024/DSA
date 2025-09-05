#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

bool allDistinct(const string& subStr) {
    unordered_set<char> chars;
    for (char c : subStr) {
        if (chars.find(c) != chars.end())
            return false;  
        chars.insert(c);
    }
    return true;  
}

vector<string> findDistinctSubstrings(const string& str) {
    vector<string> distinctSubstrings;
    for (int i = 0; i < (int)str.length(); i++) {
        for (int j = i; j < (int)str.length(); j++) {
            string subStr = str.substr(i, j - i + 1);
            if (allDistinct(subStr)) {
                distinctSubstrings.push_back(subStr);
            }
        }
    }
    return distinctSubstrings;
}

int findLengthOfMaxSubString(vector<string>str){
    int max = 0;
    for (int i = 0;i < (int)str.size(); i++) {
        if (str[i].length() > max) {
            max = str[i].length();
        }
    }return max;
}
int main() {
    string test1 = "geeksforgeeks";
    vector<string> distinctSubs = findDistinctSubstrings(test1);
    cout << findLengthOfMaxSubString(distinctSubs) << endl;
    return 0;
}
