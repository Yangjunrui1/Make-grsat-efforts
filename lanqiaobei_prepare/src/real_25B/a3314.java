package real_25B;

import java.util.HashSet;
import java.util.Scanner;
import java.lang.Math;
import java.util.Set;

public class a3314 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a[] = new int[n];
        int b[] = new int[m];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < m; i++) {
            b[i] = sc.nextInt();
        }
        int s =0;
        int count = 0;
        Set< Integer> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            for (int i1 = 0; i1 < m; i1++) {
                s = a[i]+b[i1];
                if (zhishu(s)&&s<=n+m){//并且的符号是
                    set.add(s);
                }
            }
        }
        System.out.println(set.size());
    }

    private static boolean zhishu(int s) {
        if (s == 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(s); i++) {
            if (s % i == 0) {
                return false;
            }
        }
        return true;
    }
}
