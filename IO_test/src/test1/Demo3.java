package test1;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class Demo3 {
    public static void main(String[] args) throws IOException {
        FileOutputStream fos = new FileOutputStream("aa.txt");
        fos.write("kaneklaoyezuishuai".getBytes());
        fos.close();
    }
}
