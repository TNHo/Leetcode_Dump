/*
 * Problem: Two Sum
 *
 * Problem Description:
 * You’re given:
 * An array of integers (nums)
 * A target integer (target)
 * Your task:
 * Write a function that finds two numbers in the array that add up to the target and returns their indices.
 *
 * Example:
 * Input: nums = [2, 7, 11, 15], target = 9
 * Output: [0, 1]
 * Why? nums[0] + nums[1] = 2 + 7 = 9
 *
 * Important Notes:
 * There is exactly one solution for each input.
 * You can’t use the same number twice.
 * The answer can be in any order.
 *
 * This includes not only the successful code snippet that can be run
 * on the Leetcode website, but also a way to run said code OUTSIDE
 * of Leetcode!
 */
#include<iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>&, int);

// The start of the method you see in the real leetcode starting template
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Start of my code
        int sum = 0, k, i;
        vector<int> solution;
        for (k = 0; k < nums.size(); k++) {
            for (i = 0; i < nums.size(); i++) {
                if (k!=i) // Make sure the same elements are not used
                    sum = nums.at(k) + nums.at(i);
                if (sum==target) {
                    solution.push_back(k); // Adding to vector
                    break;
                }
            }
        }
        return solution;
    }
};

// Just something we need so we can see the output
// Boilerplate for running testcases outside the leetcode site
int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << std::endl;
    } else {
        cout << "No solution found." << std::endl;
    }

    nums = {3,2,4};
    target = 6;
    result = s.twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "No solution found." << std::endl;
    }

    nums = {3,3};
    target = 6;
    result = s.twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << std::endl;
    } else {
        cout << "No solution found." << std::endl;
    }
    return 0;
}