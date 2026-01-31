package register;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Scanner;

public class Test {
    public static void main(String[] args) throws IOException {
        String filePath = "src/register/userinfo.txt";
        
        // 检查文件是否存在
        if (!Files.exists(Paths.get(filePath))) {
            System.out.println("文件不存在: " + filePath);
            System.out.println("当前工作目录: " + System.getProperty("user.dir"));
            return; // 退出程序
        }
        
        BufferedReader br = new BufferedReader(new FileReader(filePath));
        String line = br.readLine();
        br.close();
        String[] Userinfo = line.split("&");
        String[] arr1 = Userinfo[0].split("=");
        String[] arr2 = Userinfo[1].split("=");
        int count = Integer.parseInt(arr1[0]);
        String username = arr1[1];
        String password = arr2[1];
        System.out.println("用户名：" + username);
        System.out.println("密码：" + password);
        //键盘录取
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入用户名：");
        String name = sc.nextLine();
        System.out.println("请输入密码：");
        String pwd = sc.nextLine();
        if (username.equals(name) && password.equals(pwd)) {
            System.out.println("登录成功！");
        } else {
            System.out.println("登录失败！");
        }

    }
}
