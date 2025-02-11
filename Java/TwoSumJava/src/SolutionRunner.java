/*
 * Run our solution.
 * It comes out backwards for some reason, despite it not
 * being like that on Leetcode
 */
public class SolutionRunner {
    public static void main(String[] args) {
        Solution twoSum = new Solution();
        int[] set1 = {2, 7, 11, 15};
        int target1 = 9;
        int[] twoSolution1 = twoSum.twoSum(set1, target1);
        System.out.print("Indices:  ");
        for(int i = 0; i < twoSolution1.length; i++) {
            System.out.print(twoSolution1[i] + " ");
        }

        System.out.println();
        int[] set2 = {3,2,4};
        int target2 = 6;
        int[] twoSolution2 = twoSum.twoSum(set2, target2);
        System.out.print("Indices:  ");
        for(int i = 0; i < twoSolution2.length; i++) {
            System.out.print(twoSolution2[i] + " ");
        }

        System.out.println();
        int[] set3 = {3,3};
        int target3 = 6;
        int[] twoSolution3 = twoSum.twoSum(set3, target3);
        System.out.print("Indices:  ");
        for(int i = 0; i < twoSolution3.length; i++) {
            System.out.print(twoSolution3[i] + " ");
        }
    }
}
