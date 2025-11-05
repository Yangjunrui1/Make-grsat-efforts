package File_test;

import java.io.File;

public class FilesDemo1 {
    public static void main(String[] args) {
        // 1.创建File对象
        String str= "c:\\Users\\Administrator\\Desktop\\test.txt";
        File f1 = new File(str);
        System.out.println(f1);//c:\Users\Administrator\Desktop\test.txt
        //父级路径：c:\Users\Administrator\Desktop
        //子级路径：test.txt
        String parent = f1.getParent();
        System.out.println(parent);
        String child = f1.getName();
        System.out.println(child);
        //完整路径
        String path = f1.getPath();
        System.out.println(path);//c:\Users\Administrator\Desktop\test.txt

        //把一个file表示的路径进行拼接
        File parent2 = new File("c:\\Users\\Administrator\\Desktop");
        System.out.println(parent2);
        File child2 = new File(parent2,"test.txt");
        System.out.println(child2);//c:\Users\Administrator\Desktop\test.txt

    }
}
