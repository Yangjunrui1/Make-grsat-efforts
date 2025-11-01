package com.ittest666;

import java.io.File;

public class Filesdemo1 {
    public static void main(String[] args) {
        String str = "c:\\Users\\Administrator\\Desktop\\test.txt";//文件路径
        File f1 = new File(str);//创建文件对象
        System.out.println(str);//打印文件路径
        String parent = "c:\\Users\\Administrator\\Desktop\\test.txt";//父目录路径
        String child = "a.txt";
        File f2 = new File(parent, child);//创建子文件对象

    }
}
