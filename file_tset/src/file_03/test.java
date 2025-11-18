package file_03;
import javax.swing.*;
import java.io.File;
public class test {
    public static void main(String[] args) {
        //统计一个文件夹的大小
        File src = new File("E:\\aaa\\bbb");
        System.out.println(getlen(src));
    }

    public static long getlen(File src) {
        long len = 0;
        File[] files = src.listFiles();
        for (File file : files) {
           if (file.isFile()) {
               len = len + file.length();
           } else {
               len = len + getlen(file);
           }
        }
        return len;
    }
}
