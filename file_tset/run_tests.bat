@echo off
echo 正在编译代码...
javac -d out src/com/itfile/file_text.java
if %errorlevel% neq 0 (
    echo 编译失败!
    exit /b %errorlevel%
)

echo 正在编译测试代码...
javac -cp "out;lib/*" -d out test/com/itfile/file_textTest.java
if %errorlevel% neq 0 (
    echo 测试编译失败!
    exit /b %errorlevel%
)

echo 正在运行测试...
java -cp "out;lib/*" org.junit.runner.JUnitCore com.itfile.file_textTest