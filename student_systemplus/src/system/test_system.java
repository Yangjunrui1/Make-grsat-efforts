package system;
import java.util.Scanner;
import java.util.ArrayList;
public class test_system {
    public static void main(String[] args) {
        ArrayList<count> conList= new ArrayList<>();
        ArrayList<student> stuList = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("欢迎来到学生管理系统");
        loop:while(true){
            System.out.println("请进行操作"+"\n"+"1,登录"+"\n"+"2,注册"+"\n"+"3,忘记密码"+"\n"+"4,退出系统");
            int n = sc.nextInt();
            switch(n) {
                case 1-> System.out.println("登录");
                case 2-> System.out.println("注册");
                case 3-> System.out.println("忘记密码");
                case 4-> {
                    System.out.println("退出系统");
                    break loop;
                }
                default -> System.out.println("错误选择，请重新选择");
            }

        }

    }
    //新用户注册
    public static void creat(){
        System.out.println("请输入用户名");
        
    }
}
