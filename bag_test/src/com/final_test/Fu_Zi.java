package com.final_test;

public class Fu_Zi {
    public static void main(String[] args) {
        final int a= 10;// 常量,值不能改变必须初始化大写
        final double PI = 3.1415926;
    }
}
 class Fu{
    public  void methodFu(){
        System.out.println("父类方法");
    }

}
class Zi extends Fu{
    @Override
    public void methodFu(){
        System.out.println("子类方法");
    }
}
