package pratice_name;

import java.io.File;
import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;
public class Test1 {
    public static void main(String[] args) {
        //目的：实现随机点名器
        //1，从文件读取数据，每一行一个数据，存储到一个集合中
        ArrayList<String> date = new ArrayList<>();
        File file = new File("names.txt");
        Random random = new Random();
        //从文件中开始读取
        try (Scanner scanner = new Scanner(file)) {//创建一个Scanner对象，用于从文件中读取数据
            while (scanner.hasNextLine()) {//判断是否还有下一行数据
                String line = scanner.nextLine();//获取每一行数据
                date.add(line);
            }
        } catch (Exception e) {//捕获异常
            e.printStackTrace();//输出异常信息
        }
        //输入要随机点名的个数,改进输出的时候只输出名字
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入要随机点名的个数：");
        int count = scanner.nextInt();
        for (int i = 0; i < count; i++) {
            String name = date.get(random.nextInt(date.size()));
            String[] parts = name.split("—");//分割字符串
            System.out.println(parts[0]);//输出名字
        }
    }
}
