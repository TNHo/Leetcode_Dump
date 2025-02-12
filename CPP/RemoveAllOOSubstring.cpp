/*
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

class Solution {
public:
    string removeOccurrences(string s, string part) {
        // starting variables
        cout << "Starting at " << s << endl;
        int i = 0, start = 0, partStart = 0, counter = 0, saved = 0;
        for(i = 0; i < s.size(); i++) {
            tempexit: // My worst programming warcrime yet. Very dirty solution.
            cout << "i at " << i << endl;
            if(s.at(i)==part.at(0)) { // The very first instance in which sub 0 of part
                // matches with a part of s, in which we will proceed
                start = i; // save positions
                saved = i;
                counter++;
                if(s.at(start + 1)!=part.at(1)) {
                    cout << "NOPE" << endl;
                    i++;
                    // Use of a goto?! *GASP* NOOOOO!!! DON'T DO THAT!!!
                    goto tempexit;
                }
                cout << "YES" << endl;
                // Loop to check for matches in s starting from this initial point until either
                // we figure out this part of s matches part or it doesn't and we move on
                while(partStart!=(part.size()-1)) {
                    cout << "letter at " << s.at(start) << endl;
                    start++;
                    partStart++;
                    if(s.at(i)==part.at(partStart))
                        counter++;
                    else
                        goto escape;
                }
                escape:
                // Delete that substring
                if(partStart == (part.size()-1)) {
                    s.erase(saved, partStart+1);
                    cout << s << endl;
                    // reset positions
                    i = 0;
                    start = 0;
                    saved = 0;
                    partStart = 0;
                    counter = 0;
                }
            }
        }

        // OHHHHH NOOOOOOO!!!! REPEATED CODE!!!!!
        // The first loop always leaves out one substring
        // so a repeat is nessecary in order to complete this...
        for(i = 0; i < s.size(); i++) {
            tempexita:
            if(s.at(i)==part.at(0)) {
                start = i;
                saved = i;
                counter++;
                if(s.at(start + 1)!=part.at(1)) {
                    i++;
                    goto tempexita;
                }
                while(partStart!=(part.size()-1)) {
                    start++;
                    partStart++;
                    if(s.at(i)==part.at(partStart))
                        counter++;
                    else
                        break;
                }
                if(partStart == (part.size()-1)) {
                    s.erase(saved, partStart+1);
                    cout << s << endl;
                    i = 0;
                    start = 0;
                    saved = 0;
                    partStart = 0;
                    counter = 0;
                }
            }
            // AAAAAAAAAAAAAAAAAAAAAAAAAHHHHHHHHHHHHHHHHH
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