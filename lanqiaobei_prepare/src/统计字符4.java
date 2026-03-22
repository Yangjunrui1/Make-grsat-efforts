import java.util.Scanner;

public class 统计字符4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一行字符");
        String text = sc.nextLine();

        int letterCount = 0;
        int spaceCount = 0;
        int digitCount = 0;// 统计字母、空格和数字的数量
        int otherCount = 0;

        for (char ch : text.toCharArray()) {
            if ((Character.isLetter(ch))) {
                letterCount++;
            } else if (Character.isWhitespace(ch)) {
                spaceCount++;
            } else if (Character.isDigit(ch)) {
                digitCount++;
            } else {
                otherCount++;
            }
        }
        System.out.println("字符"+letterCount);
        System.out.println("空格"+spaceCount);
        System.out.println("数字"+digitCount);
        System.out.println("其他"+otherCount);
    }
}
