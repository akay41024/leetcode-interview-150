#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int solve(int n) {
        int a = 0;
        while (n > 0) {
            int rem = n % 10;
            a = a + rem * rem;
            n = n / 10;
        }
        return a;
    }

    bool isHappy(int n) {
        unordered_set<int> sett;
        while (n != 1 && !sett.count(n)) {
            sett.insert(n);
            n = solve(n);
            cout << n << " ";
        }
        if (n == 1)
            return true;
        else
            return false;
    }
};

int main() {
    Solution solution;

    // Example usage
    int number = 19;

    bool result = solution.isHappy(number);

    // Display the result
    if (result) {
        cout << "The number is happy!" << endl;
    } else {
        cout << "The number is not happy." << endl;
    }

    return 0;
}
/*
202. Happy Number
Easy
9.7K
1.3K
Companies
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

 

Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
Example 2:

Input: n = 2
Output: false
 

Constraints:

1 <= n <= 231 - 1

*/