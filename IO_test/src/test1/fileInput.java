package test1;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

public class fileInput {
    public static void main(String[] args) throws IOException {
        // 定义文件路径

        // 确保父目录存在（添加空值检查）

        // 创建文件输出流
        FileOutputStream fos = new FileOutputStream("aa.txt");

        // 写入数据
        fos.write(65);
        fos.write(66);

        // 关闭流
        fos.close();
    }
}
