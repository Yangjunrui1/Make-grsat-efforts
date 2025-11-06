package File_test;

import java.io.File;

public class Filedemo4 {
    public static void main(String[] args) {
        /*
        public boolean createNewFile()//创建文件
        public boolean mkdir()//创建目录
        public boolean mkdirs()//创建目录，包括父目录,多级目录，如果父目录不存在，会自动创建
        public boolean delete()//删除文件或目录
         */
        File f1 = new File("E:\\aaa\\ddc");
        try {
            System.out.println("创建文件成功");
            f1.createNewFile();
        } catch (Exception e) {
            System.out.println("创建文件失败");
            e.printStackTrace();
        }
    }
}
