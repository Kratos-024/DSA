#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s,int i,int j) {

    while(i<=j){
        if(s[i++] != s[j--]) return false;
    }
    return true;
}
pair<int,int> longestPalindromeInfo(const string &s) {
    int n = s.size();
    int maxLength = 1;  
    int startIndex = 0;

   for(int i = 0; i < n; i++) {
       for (int j = i; j < n;j++){
        if(isPalindrome(s,i,j)&&j-i+1>maxLength){
            maxLength = j - i + 1;
            startIndex = i;
        }
       }
   }

    return {startIndex, maxLength};
}
string longestPalindrome(const string& s){
    auto [start, length] = longestPalindromeInfo(s);
    return s.substr(start,length);
}
int main() {
  cout << longestPalindrome("forgeeksskeegfor") << "\n"; // expect geeksskeeg
    cout << longestPalindrome("Geeks") << "\n";            // expect ee
    cout << longestPalindrome("abc") << "\n";  
}