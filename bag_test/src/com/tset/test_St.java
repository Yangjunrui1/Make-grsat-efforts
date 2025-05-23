package com.tset;


public class test_St {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setAge(19);
        s1.setName("zhangsan");
        s1.setScore(99);
        String s = "add";
        System.out.println();
        com.ddd.Teacher t1 = new com.ddd.Teacher();
        com.ttt.Teacher t2 = new com.ttt.Teacher();// 包名不同
    }
}
