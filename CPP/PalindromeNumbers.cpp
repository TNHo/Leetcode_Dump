/*
 * Problem: Palindrome Number
 *
 * Given an integer x, return true if x is a palindrome, and false otherwise.
 *
 * Example 1:
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 *
 * Example 2:
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
 *
 * Example 3:
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 *
 * Constraints:
 *
 *    -2^31 <= x <= 2^31 - 1
 *
 * This version of the solution involves strings (because I ain't got time
 * to actually figure it out with only pure ints and algorithms).
 * At least we're not making ANOTHER STRING and REVERSING IT and comparing that!
 * That's the worst way.
 *
 * At least here, we're only using one string. See the comments inside the
 * Solution class:
 */
#include<iostream>
using namespace std;

class Solution {
public:
    // The string conversion of Palindrome number
    bool isPalindrome(int x) {
        // convert to string
        string numstr = to_string(x);
        // Starting ints at the first and last elements
        int i = 0, j = numstr.size()-1;
        while(i < numstr.size()) {
            // Increment and decrement i and j
            if(numstr[i]==numstr[j]) {
                i++;
                j--;
            } else
                // If at any point i and j don't match, it is NOT a palindrome
                return false;
        }
        // If all runs well, it is a palindrome
        return true;
    }
};

// Just something we need so we can see the output
// Boilerplate for running testcases outside the leetcode site
int main() {
    Solution s;
    int palindrome1 = 121;
    if(s.isPalindrome(palindrome1)) {
        cout << palindrome1 << " is a palindrome." << endl;
    } else {
        cout << palindrome1 << " is not a palindrome." << endl;
    }


    int palindrome2 = -121;
    if(s.isPalindrome(palindrome2)) {
        cout << palindrome2 << " is a palindrome." << endl;
    } else {
        cout << palindrome2 << " is not a palindrome." << endl;
    }


    int palindrome3 = 10;
    if(s.isPalindrome(palindrome3)) {
        cout << palindrome3 << " is a palindrome." << endl;
    } else {
        cout << palindrome3 << " is not a palindrome." << endl;
    }

    int palindrome4 = 3567653;
    if(s.isPalindrome(palindrome4)) {
        cout << palindrome4 << " is a palindrome." << endl;
    } else {
        cout << palindrome4 << " is not a palindrome." << endl;
    }

    int palindrome5 = 454454;
    if(s.isPalindrome(palindrome5)) {
        cout << palindrome5 << " is a palindrome." << endl;
    } else {
        cout << palindrome5 << " is not a palindrome." << endl;
    }
    return 0;
}