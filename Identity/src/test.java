import java.util.Scanner;//导包
public class test {
    public static void main(String[] args) {
        String name = "张三";
        int age = 18;
        char sex = '男';
        boolean one = true;
        System.out.println(name);
        System.out.println(age);
        System.out.println(sex);
        System.out.println(one);
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        int k = sc.nextInt();
        System.out.println(i+k);
    }
}
