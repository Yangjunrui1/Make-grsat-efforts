package tututu_2025;

import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int a = sc.nextInt();
            int b = 0;
            for (int i1 = 0; i1 < a; i1++) {
                int x = sc.nextInt();
                b^=x;
            }
            if(b==0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
