import java.util.Scanner;

public class a13数字判断 {
    public static void main(String[] args) {

        try {
            System.out.println("请输入一个不多于5位数的数字");
            Scanner sc = new Scanner(System.in);
            int value = sc.nextInt();
            if (value<=0||value>99999) {
                System.out.println("输入的数字不合法");
            } else {
                String valueStr = String.valueOf(value);
                System.out.println("数字有"+valueStr.length()+"位");
                System.out.println("逆序输出为");
                for (int i = 0; i < valueStr.length(); i++) {
                    System.out.print(value%10);
                    value = value/10;
                }
            }
        } catch (Exception e) {// Exception e//
            System.out.println("输入的不是一个数字");
        }
    }
}
