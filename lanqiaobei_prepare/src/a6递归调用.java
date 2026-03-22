import java.util.Scanner;

public class a6递归调用 {
    public static void main(String[] args) {
        //使用递归的方法，逆序输出5个字符
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入5个字符");
        String text = sc.nextLine();
        // 确保只取前5个；
        char date[] = (text.length()>5?text.substring(0,5):text).toCharArray();
        reverse(date, date.length-1);
    }
    private static void reverse(char[] text,int  index){
        if (index >= text.length) {
            return;
        }
        reverse(text, index+1);
        System.out.print(text[index]);
        return;
    }
}
