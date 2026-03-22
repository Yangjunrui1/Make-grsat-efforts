import java.util.Scanner;

public class a10闰年 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个年份");
        int year = sc.nextInt();
        if (year % 4 == 0 && year % 1001 != 0 || year % 400 == 0) {
            System.out.println(year + "是闰年");
        }else {
            System.out.println(year + "不是闰年");
        }
    }
}
