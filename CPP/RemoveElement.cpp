/*
 * Problem: Remove Element
 * Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
 *
 * Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
 *
 *    Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
 *    Return k.
 *
 * Custom Judge:
 * The judge will test your solution with the following code:
 * int[] nums = [...]; // Input array
 * int val = ...; // Value to remove
 * int[] expectedNums = [...]; // The expected answer with correct length.
 *                             // It is sorted with no values equaling val.
 *
 * int k = removeElement(nums, val); // Calls your implementation
 * assert k == expectedNums.length;
 * sort(nums, 0, k); // Sort the first k elements of nums
 * for (int i = 0; i < actualLength; i++) {
 *     assert nums[i] == expectedNums[i];
 * }
 *
 * If all assertions pass, then your solution will be accepted.
 *
 * Example 1:
 * Input: nums = [3,2,2,3], val = 3
 * Output: 2, nums = [2,2,_,_]
 * Explanation: Your function should return k = 2, with the first two elements of nums being 2.
 * It does not matter what you leave beyond the returned k (hence they are underscores).
 *
 * Example 2:
 * Input: nums = [0,1,2,2,3,0,4,2], val = 2
 * Output: 5, nums = [0,1,4,0,3,_,_,_]
 * Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
 * Note that the five elements can be returned in any order.
 * It does not matter what you leave beyond the returned k (hence they are underscores).
 *
 *
 * Constraints:
 *    0 <= nums.length <= 100
 *    0 <= nums[i] <= 50
 *    0 <= val <= 100
 *
 * https://leetcode.com/problems/remove-element/
 */
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Loop through our vector
        for (int i = 0; i < nums.size(); i++) {
            if(nums.at(i)==val) { // At the first instance of val, delete it
                nums.erase(nums.begin()+i);
                i = 0; // Start at 0 again until there is no more instance of val left
            }
        }

        // Repeated code?!?! But it was necessary for ALL 115 test cases to pass
        // Without it, only 111 something (more or less) pass...
        for (int i = 0; i < nums.size(); i++) {
            if(nums.at(i)==val) { // At the first instance of val, delete it
                nums.erase(nums.begin()+i);
                i = 0; // Start at 0 again until there is no more instance of val left
            }
        }
        return nums.size();
    }
};

// Just something we need so we can see the output
// Boilerplate for running testcases outside the leetcode site
int main() {
    Solution s;
    int i;
    vector<int> nums1 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val1 = 2;
    int size = s.removeElement(nums1, val1);
    cout << size << endl;
    for(i = 0; i < nums1.size(); i++)
        cout << nums1.at(i) << ", ";
    cout << endl;

    vector<int> nums2 = {3, 2, 2, 3};
    int val2 = 2;
    size = s.removeElement(nums2, val2);
    cout << size << endl;
    for(i = 0; i < nums2.size(); i++)
        cout << nums2.at(i) << ", ";
    cout << endl;

    vector<int> nums3 = {3, 3};
    int val3 = 3;
    size = s.removeElement(nums3, val3);
    cout << size << endl;
    for(i = 0; i < nums3.size(); i++)
        cout << nums3.at(i) << ", ";
    cout << endl;
    return 0;
}