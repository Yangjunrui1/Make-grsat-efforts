package file_03;
import java.io.File;
public class fiel1_test {
    //删除一个多级文件夹
    //1，删除里面的内容
    //2，删除空文件夹
    public static void main(String[] args) {
        File src  = new File("E:\\aaa");
        delete(src);
    }

    public static void delete(File src) {
        File[]  files = src.listFiles();
        //如果目录不存在或者无权限访问，则直接返回
        if (files == null) {
            return;
        }
        //遍历
        for (File file : files) {
            if (file.isFile()) {
                file.delete();
            } else {
                delete(file);
            }
        }
        //删除完所有子项后，删除当前空文件夹
        src.delete();
    }



}
