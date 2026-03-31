package real_25B;

import java.util.ArrayList;
import java.util.Scanner;

public class dianchifenzu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        for (int i = 0; i < count; i++) {
            if (did()) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }

        }
    }

    private static boolean did() {
        Scanner sc = new Scanner(System.in);
        int connt1 = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < connt1; i++) {
            list.add(sc.nextInt());
        }
        list.sort(null);
        System.out.println( list);
        int sum = 0;
        for (int i = 0; i < list.size(); i++) {
            sum += list.get(i);
        }
        if (sum % 2 != 0) {
            return false;
        }
        int half = sum/2;


        return canparrt(list, half);

    }
    private static boolean canparrt(ArrayList<Integer> list, int target) {
        boolean[] dp = new boolean[target + 1];//创建一个长度为target+1的布尔数组，用于记录是否可以找到一个子集，使得子集的和等于target
        dp[0] = true;
        for (int num : list) {//第一次，
            // 从后往前遍历，避免重复使用同一个数字
            for (int j = target; j >= num; j--) {//遍历数组，从后往前遍历，避免重复使用同一个数字11,10,9,8,7,6,5,4,3,2,1
                if (dp[j - num]) {//判断是否可以找到一个子集，使得子集的和等于j-num
                    dp[j] = true;
                }
            }
        }

        return dp[target];
    }
}
