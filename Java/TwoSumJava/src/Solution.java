/*
 * Note: I wrote this back in Jan 29th, 2023.
 * Probably my first? I don't remember.
 * I didn't remember I did this exact problem in Java, but
 * it was there.
 *
 * I swear, I did NOT look at this or remembered its existence
 * until AFTER I wrote the C++ solution...
 */
public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] tempRay = new int[2];
        for (int i = 0; i < nums.length; i++) {
            for (int o = 0; o < nums.length; o++) {
                if ((i!=o)&&(nums[i] + nums[o]==target)) {
                    tempRay[0] = i;
                    tempRay[1] = o;
                }
            }
        }
        return tempRay;
    }
}