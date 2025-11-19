package test1;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.classfile.FieldTransform;
public class test {
    public static void main(String[] args) throws IOException {// throws FileNotFoundException, IOException作用域在main方法中，抛出异常
        FileOutputStream fos = new FileOutputStream("aa.txt");
        fos.write(98);
        fos.write(65);
        byte[] bytes = {97, 98, 99, 100, 101};
        fos.write(bytes);
        fos.write(bytes, 0, 2);
        fos.write("hello".getBytes());
        fos.close();
    }
}
