package com.itfile;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;

import java.io.File;
import java.io.IOException;
import java.nio.file.Path;

import static org.junit.jupiter.api.Assertions.*;

class file_textTest {

    @TempDir
    Path tempDir;

    @Test
    void testCreateFileStructureSuccess() throws IOException {
        // 准备测试数据
        String parentDirPath = tempDir.resolve("testDir").toString();
        String fileName = "test.txt";

        // 执行测试
        boolean result = file_text.createFileStructure(parentDirPath, fileName);

        // 验证结果
        assertTrue(result, "应该成功创建文件");

        File parentDir = new File(parentDirPath);
        assertTrue(parentDir.exists(), "父目录应该存在");
        assertTrue(parentDir.isDirectory(), "应该是一个目录");

        File testFile = new File(parentDir, fileName);
        assertTrue(testFile.exists(), "文件应该存在");
        assertTrue(testFile.isFile(), "应该是一个文件");
    }

    @Test
    void testCreateFileStructureAlreadyExists() throws IOException {
        // 准备测试数据
        String parentDirPath = tempDir.resolve("existingDir").toString();
        String fileName = "existing.txt";
        
        // 先创建一次
        boolean firstResult = file_text.createFileStructure(parentDirPath, fileName);
        assertTrue(firstResult, "第一次应该成功创建文件");

        // 再次尝试创建同样的文件结构
        boolean secondResult = file_text.createFileStructure(parentDirPath, fileName);
        
        // 验证结果 - 第二次应该返回false，因为文件已存在
        assertFalse(secondResult, "文件已存在时应该返回false");
        
        File parentDir = new File(parentDirPath);
        assertTrue(parentDir.exists(), "父目录应该存在");
        assertTrue(parentDir.isDirectory(), "应该是一个目录");

        File testFile = new File(parentDir, fileName);
        assertTrue(testFile.exists(), "文件应该存在");
        assertTrue(testFile.isFile(), "应该是一个文件");
    }
}