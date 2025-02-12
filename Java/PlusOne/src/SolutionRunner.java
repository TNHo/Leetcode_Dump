public class SolutionRunner {
    public static void main(String[] args) {
        Solution s = new Solution();
        int n = 9, t = 1000000000, so;
        so = n*t;
        System.out.println(so);
        int i;
        int[] array1 = {1, 2, 3};
        array1 = s.plusOne(array1);
        System.out.print("[");
        for(i = 0; i < array1.length; i++) {
            System.out.print(array1[i]);
            System.out.print(" ");
        }
        System.out.print("]\n\n");
        int[] array2 = {4,3,2,1};
        array2 = s.plusOne(array2);
        System.out.print("[");
        for(i = 0; i < array2.length; i++) {
            System.out.print(array2[i]);
            System.out.print(" ");
        }
        System.out.print("]\n\n");
        int[] array3 = {9};
        array3 = s.plusOne(array3);

        System.out.print("[");
        for(i = 0; i < array3.length; i++) {
        System.out.print(array3[i]);
        System.out.print(" ");
    }
        System.out.print("]\n\n");
        int[] array4 = {9,8,7,6,5,4,3,2,1,0};
        array4 = s.plusOne(array4);

        System.out.print("[");
        for(i = 0; i < array4.length; i++) {
        System.out.print(array4[i]);
            System.out.print(" ");
        }
                System.out.print("]\n\n");
    }
}

