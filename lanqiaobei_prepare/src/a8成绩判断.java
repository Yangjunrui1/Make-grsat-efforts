import java.util.Scanner;

public class a8成绩判断 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个成绩");
        double score = sc.nextDouble();
        char grade = score >= 90?'A':score>=80?'B':score>=70?'C':score>=60?'D':'E';
        System.out.println("成绩等级是："+grade);

    }
}
