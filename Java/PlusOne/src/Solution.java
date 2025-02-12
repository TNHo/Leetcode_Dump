/*
 * Problem: Plus One
 *
 * You are given a large integer represented as an integer array digits, where each digits[i] is
 * the ith digit of the integer. The digits are ordered from most significant to least significant
 * in left-to-right order. The large integer does not contain any leading 0's.
 * Increment the large integer by one and return the resulting array of digits.
 *
 *
 * Example 1:
 * Input: digits = [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * Incrementing by one gives 123 + 1 = 124.
 * Thus, the result should be [1,2,4].
 *
 * Example 2:
 * Input: digits = [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * Incrementing by one gives 4321 + 1 = 4322.
 * Thus, the result should be [4,3,2,2].
 *
 * Example 3:
 * Input: digits = [9]
 * Output: [1,0]
 * Explanation: The array represents the integer 9.
 * Incrementing by one gives 9 + 1 = 10.
 * Thus, the result should be [1,0].
 *
 *
 * Constraints:
 *    1 <= digits.length <= 100
 *    0 <= digits[i] <= 9
 *    digits does not contain any leading 0's.
 *
 * https://leetcode.com/problems/plus-one/
 * 
 */
import java.math.BigInteger;
import java.util.*;
class Solution {
    public int[] plusOne(int[] digits) {
        String ten = ""; // Start empty
        for(int i = 0; i < digits.length; i++) {
            if(i==0)
                ten = ten + "1";
            else
                ten = ten + "0";
        } // Get the x10 multiple
        BigInteger tenZero = new BigInteger(ten);
        BigInteger sum = new BigInteger("0"); // In BigInteger to avoid integer overflow
        // Long isn't enough for some testcases

        // Grab the individual number and multiply by 'tenZero',
        // add it to sum, and divide 'tenZero' by 10 to get next digit
        for(int k = 0; k < digits.length; k++) {
            System.out.println(digits[k]);
            sum = sum.add(tenZero.multiply(new BigInteger(Integer.toString(digits[k]))));
            tenZero = tenZero.divide(new BigInteger("10"));
        }
        sum = sum.add(new BigInteger("1")); // Add one
        // Add each digit to an arraylist by grabbing remainders
        ArrayList<Integer> temp = new ArrayList<Integer>();
        while(!sum.equals(new BigInteger("0"))) {
            int remainder = sum.mod(new BigInteger("10")).intValue();
            sum = sum.divide(new BigInteger("10"));
            temp.add(remainder);
        }
        Collections.reverse(temp); // reverse the list
        int[] newDigit = new int[temp.size()];
        // Then plop it into an array of ints
        for(int l = 0; l < newDigit.length; l++) {
            newDigit[l] = temp.get(l).intValue();
        }
        return newDigit;
    }
}