package tututu_2025;

public class A {
    public static void main(String[] args) {
        int count = 0;
        for (int i = 7; i <= 2025; i+=10) {
            if (i % 10 == 7) {//7的倍数
                count++;
            }
        }
        System.out.println(count);
    }
}
