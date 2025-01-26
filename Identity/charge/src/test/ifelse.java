package test;
import java.util.Scanner;
public class ifelse {
    public static void main(String[] args) {

       /* System.out.println("请输入一个三位数");
        System.out.println(1+'s');
        System.out.println("牛顿"+1+12);
        System.out.println(12+1+"牛顿");
        //如果有小数参加可能有误差
        int num = sc.nextInt();
        System.out.println("个位数是"+num%10);
        num = num/10;
        System.out.println(num%10);
        num = num/10;
        System.out.println(num%10);
        byte a = 10;
        byte b = 20;
        byte c = (byte)(a+b);
        System.out.println(c);
        int d = 12;
        int e = 32;
        int t = d+e;
        System.out.println(t);
        int a = 10;
        int b = 10;
        int c = 20;
        System.out.println(a==b);
        System.out.println(a==c);
        System.out.println("请输入自己的fashion程度");
        int m = sc.nextInt();
        System.out.println("请输入对象的fashion程度");
        int y = sc.nextInt();
        System.out.println("相亲"+(m>=y));
        System.out.println(true&true);
        System.out.println(true&false);
        System.out.println(true|true);
        System.out.println(true|false);*/
//        int a = 10;
//        int b = 20;
//        boolean j = ++a<7&&++b<9;
//        System.out.println(j);
//        System.out.println(a);
//        System.out.println(b);
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        int j = sc.nextInt();
        System.out.println();
        boolean ret = i == 6||j == 6||(i+j)%6==0;
        System.out.println(ret);
    }
}
