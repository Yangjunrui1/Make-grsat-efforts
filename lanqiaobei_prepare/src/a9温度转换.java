import java.util.Scanner;

public class a9温度转换 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个温度");
        double tomp = sc.nextDouble();

        // C = (F-32) * 5/9
        double c = (tomp-32) * 5/9;
        System.out.println("C = " + c);

        // F = C * 9/5 + 32
        double f = c * 9/5 + 32;
        System.out.println("F = " + f);
    }
}
