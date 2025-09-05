// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // // Mini-question 1:
// // // Check if we can move forward from the first position
// // bool canMoveFromFirst(const vector<int>& arr) {
// //     if(arr[0]==0){
// //         return false;
// //     }else{
// //         return true;
// //     }
// // }

// // int main() {
// //     vector<int> test1 = {1, 3, 5};
// //     vector<int> test2 = {0, 2, 3};

// //     cout << canMoveFromFirst(test1) << endl; // Expected: 1 (true)
// //     cout << canMoveFromFirst(test2) << endl; // Expected: 0 (false)
// // }
// #include <iostream>
// #include <vector>
// using namespace std;

// // Mini-question 2:
// // Check if we can reach the last position in at most 1 jump
// bool canReachInOneJump(const vector<int>& arr) {
//     if(arr[0]>=arr.size()-1){
//         return true;
//     }else{
//         return false;
//     }
// }

// int main() {
//     vector<int> test1 = {5, 1, 2, 3}; // can reach in 1 jump
//     vector<int> test2 = {2, 0, 0, 0}; // cannot reach in 1 jump
//     vector<int> test3 = {3};          // already at last position (0 jumps)

//     cout << canReachInOneJump(test1) << endl; // Expected: 1 (true)
//     cout << canReachInOneJump(test2) << endl; // Expected: 0 (false)
//     cout << canReachInOneJump(test3) << endl; // Expected: 1 (true)
// }
#include <iostream>
#include <vector>
using namespace std;

// Mini-question 3:
// Check if we can reach the last position in at most 2 jumps
bool canReachInTwoJumps(const vector<int>& arr) {
    --* 
}

int main() {
    vector<int> test1 = {2, 3, 1, 1, 4}; // can reach in 2 jumps
    vector<int> test2 = {1, 1, 1, 1, 1}; // needs more than 2 jumps
    vector<int> test3 = {4, 1, 1, 1, 1}; // can reach in 1 jump (should return true)
    vector<int> test4 = {0, 2, 3};       // cannot move at all

    cout << canReachInTwoJumps(test1) << endl; // Expected: 1 (true)
    cout << canReachInTwoJumps(test2) << endl; // Expected: 0 (false)
    cout << canReachInTwoJumps(test3) << endl; // Expected: 1 (true)
    cout << canReachInTwoJumps(test4) << endl; // Expected: 0 (false)
}
