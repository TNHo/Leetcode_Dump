/*
 * Problem: 1910. Remove All Occurrences of a Substring
 *
 * Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
 *
 * Find the leftmost occurrence of the substring part and remove it from s.
 *
 * Return s after removing all occurrences of part.
 *
 * A substring is a contiguous sequence of characters in a string.
 *
 *
 * Example 1:
 * Input: s = "daabcbaabcbc", part = "abc"
 * Output: "dab"
 * Explanation: The following operations are done:
 * - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
 * - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
 * - s = "dababc", remove "abc" starting at index 3, so s = "dab".
 * Now s has no occurrences of "abc".
 *
 * Example 2:
 * Input: s = "axxxxyyyyb", part = "xy"
 * Output: "ab"
 * Explanation: The following operations are done:
 * - s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
 * - s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
 * - s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
 * - s = "axyb", remove "xy" starting at index 1 so s = "ab".
 * Now s has no occurrences of "xy".
 *
 * Constraints:
 *   1 <= s.length <= 1000
 *   1 <= part.length <= 1000
 *   s​​​​​​ and part consists of lowercase English letters.
 *
 * https://leetcode.com/problems/remove-all-occurrences-of-a-substring/?envType=daily-question&envId=2025-02-11
 */
#include<iostream>
using namespace std;

/*
 * After hours of suffering, I had a family member of mine help...
 * I still don't quite understand this solution either, as it required digging through
 * online references and using stuff my C++ class had not gone through yet.
 * See uses of size_t and npos. WTH is that?!
 * I should attempt a java version. I could probably do that without help... Maybe?
 */
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (true) {
            size_t pos = s.find(part);  // Find the first occurrence of part
            if (pos == string::npos) { // If not found, exit the loop
                break;
            }
            s.erase(pos, part.length()); // Remove the occurrence
        }
        return s;
    }
};

// Just something we need so we can see the output
// Boilerplate for running testcases outside the leetcode site
int main() {
    Solution s;
    string str1 = "daabcbaabcbc";
    string part1 = "abc";
    string str2 = s.removeOccurrences(str1, part1);
    cout << str2 << endl;


    string str3 = "eemckxmckx";
    string part2 = "emckx";
    string str4 = s.removeOccurrences(str3, part2);
    cout << str4 << endl;
    return 0;
}