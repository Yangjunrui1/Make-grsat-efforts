package file_03;

import java.io.File;
import java.util.HashMap;

public class test22 {
    public static void main(String[] args) {
        //统计一个文件夹中每种文件的个数并打印
        File file = new File("E:\\aaa\\src");

    }

    public static void getConut(File src) {
        HashMap<String, Integer> hm = new HashMap<>();
        File[] files = src.listFiles();
        for (File file : files) {
            if (file.isFile()) {
                //如果是文件，获取文件名
                String name = file.getName();
                String[] arr = name.split("\\.");// \\.加. 表示匹配.
                if (hm.containsKey(name)) {
                    int count = hm.get(name);
                    count++;
                    hm.put(name, count);
                } else {
                    hm.put(name, 1);
                }

            } else {
                //如果是目录，递归
                getConut(file);
            }
        }
    }
}
