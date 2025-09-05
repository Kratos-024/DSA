#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int maxSubarraySum(vector<int>& nums) {
//         int sum = 0;
//         for (int i = 0; i < nums.size();i++){
//             sum += nums[i];
//         }
//         return sum;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {1, 2, 3, 4}; // Example input
//     int result = sol.maxSubarraySum(nums);
//     cout << "Maximum Subarray Sum: " << result << endl;
//     return 0;
// }
////////////////////////////////////////////////////////
class Solution {
public:
    int maxSubarraySum(vector<int>& nums) {
        int currentSum = 0,maxSum = INT_MIN;
        for (int num:nums){
            currentSum += num;
            maxSum = max(maxSum, currentSum);
            if(currentSum==maxSum){}
            if (currentSum < 0) currentSum = 0;
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    
    vector<pair<vector<int>, int>> testCases = {
        {{4, -1, 2, 1, -5, 4}, 6},
        {{1, 2, 3, 4}, 10},
        {{-2, -3, 4, -1, -2, 1, 5, -3}, 7},
        {{-1, -2, -3, -4}, -1},
        {{5, -9, 6, -2, 3}, 7}
    };

    int passed = 0, total = testCases.size();

    for (int i = 0; i < total; ++i) {
        int result = sol.maxSubarraySum(testCases[i].first);
        if (result == testCases[i].second) {
            cout << "✅ Test Case " << i + 1 << " Passed\n";
            passed++;
        } else {
            cout << "❌ Test Case " << i + 1 << " Failed. Expected: "
                 << testCases[i].second << ", Got: " << result << "\n";
        }
    }

    cout << "\n" << passed << "/" << total << " Test Cases Passed.\n";

    return 0;
}