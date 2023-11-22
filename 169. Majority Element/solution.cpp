#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(!count){
                ele = nums[i];
            }
            ele == nums[i]? count++: count--;
        }
        return ele;
    }
};

int main() {
    Solution solution;  // Create an instance of the Solution class
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int majority = solution.majorityElement(nums);

    cout << "Majority Element: " << majority << endl;

    return 0;
}



// 169. Majority Element
// Easy
// 17.5K
// 524
// Companies
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
 

// Follow-up: Could you solve the problem in linear time and in O(1) space?

