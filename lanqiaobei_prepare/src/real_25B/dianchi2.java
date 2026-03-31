package real_25B;

import java.util.Scanner;

public class dianchi2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        for (int i = 0; i < count; i++) {
            int a = sc.nextInt();
            int b = 0;
            for (int i1 = 0; i1 < a; i1++) {
                int temp = sc.nextInt();
                b^=temp;
            }
            if (b == 0) {
                System.out.println("Yes");
            }else {
                System.out.println("No");
            }
        }
    }
}
