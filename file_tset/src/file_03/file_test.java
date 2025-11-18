package file_03;

import java.io.File;


public class file_test {
   //需求：找出电脑中所有以avi结尾的电影
    public static void main(String[] args) {
        findAVI();
    }

    public static void findAVI() {
        File[] arr = File.listRoots();
        for (File f : arr) {
            findAVI(f);
        }
    }
    public static void findAVI(File src) {
        File[] files = src.listFiles(); //获取当前目录下的所有文件
        if (files == null) {
            System.out.println("当前目录为空");
            return;
        }
        for (File file : files) {
            if (file.isFile() && file.getName().endsWith(".avi")) {
                System.out.println(file);
            } else if (file.isDirectory()) {
                //如果是目录
                findAVI(file);
            }
        }
    }
}
