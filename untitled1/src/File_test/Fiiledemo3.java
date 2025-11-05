package File_test;

import java.io.File;

public class Fiiledemo3 {
    public static void main(String[] args) {
        /*
        public boolean isDirectory()
        判断是否是目录
        public boolean isFile()
        判断是否是文件
        public boolean exists()
        判断是否存在
         */
        //对一个文件夹的路径进行判断
        File f1 = new File("E:\\aaa\\abc.txt");
        System.out.println(f1.isDirectory());
        System.out.println(f1.isFile());
        System.out.println(f1.exists());

        File f2 = new File("E:\\aaa\\bbb");
        System.out.println(f2.isDirectory());
        System.out.println(f2.isFile());
        System.out.println(f2.exists());

        File f3 = new File("E:\\aaa\\bbb");
        System.out.println(f3.isDirectory());
        System.out.println(f3.isFile());
        System.out.println(f3.exists());

    }
}
