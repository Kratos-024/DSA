#include <iostream>
#include <vector>
using namespace std;

// Mini-question 1:
// Check if we can move forward from the first position
bool canMoveFromFirst(const vector<int>& arr) {
    if(arr[0]==0){
        return false;
    }else{
        return true;
    }
}

int main() {
    vector<int> test1 = {1, 3, 5};
    vector<int> test2 = {0, 2, 3};

    cout << canMoveFromFirst(test1) << endl; // Expected: 1 (true)
    cout << canMoveFromFirst(test2) << endl; // Expected: 0 (false)
}
