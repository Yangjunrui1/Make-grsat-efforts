package File_test;

import java.io.File;
import java.util.Date;
public class Filedemo3 {
    public static void main(String[] args) {
        /*
        public long length()//只能返回文件的字节数，不能返回目录的字节数
        返回文件的字节数
        public String getAbsolutePath()
        返回文件的绝对路径
        public String getPath()
        返回文件的路径
        public String getName()
        返回文件的名称
        public long lastModified()
        返回文件的最后修改时间
         */
        File f1 = new File("E:\\aaa\\abc.txt");
        System.out.println(f1.length());

        File f2 = new File("E:\\aaa\\bbb");
        System.out.println(f2.length());

        //返回文件的绝对路径
        File f3 = new File("E:\\aaa\\ac.txt");
        System.out.println(f3.getAbsolutePath());


        //返回文件的路径
        File f4 = new File("untitled1\\abc.txt");
        System.out.println(f4.getAbsolutePath());


        System.out.println(f1.lastModified());
        //输出可以直接观察的时间
        System.out.println(new Date(f1.lastModified()));
    }
}
