import java.util.Scanner;

public class a7判断回文数 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个数字");
        String value = sc.nextLine();
        if (isHuiwen(value)) {
            System.out.println("是回文数");
        } else {
            System.out.println("不是回文数");
        }
    }

    public static boolean isHuiwen(String value) {
        int left = 0;
        int right = value.length()-1;
        while (left < right) {
            if (value.charAt(left) != value.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
