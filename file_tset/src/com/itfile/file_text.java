package com.itfile;

import java.io.File;
import java.io.IOException;

public class file_text {

    //在当前模块下的aaa文件夹
    public static void main(String[] args) {
        // 检查参数数量
        String parentDirPath = "myfile/aaa";
        String fileName = "a.txt";
        
        if (args.length >= 2) {
            parentDirPath = args[0];
            fileName = args[1];
        } else if (args.length == 1) {
            parentDirPath = args[0];
        }
        
        try {
            boolean result = createFileStructure(parentDirPath, fileName);
            if(result){
                System.out.println("文件创建成功");
            }
            else{
                System.out.println("文件创建失败");
            }
        } catch (IOException e) {
            System.err.println("创建文件时发生错误: " + e.getMessage());
            e.printStackTrace();
        }
    }
    
    /**
     * 创建文件结构，包括父目录和文件
     * @param parentDirPath 父目录路径
     * @param fileName 文件名
     * @return 是否成功创建文件
     * @throws IOException IO操作异常
     */
    public static boolean createFileStructure(String parentDirPath, String fileName) throws IOException {
        File file = new File(parentDirPath);
        // 创建父级路径
        file.mkdirs();
        File src = new File(file, fileName);
        return src.createNewFile();
    }

}