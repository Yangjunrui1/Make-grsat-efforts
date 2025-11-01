package com.tetet;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Set;
import java.util.function.Consumer;

public class testset {
    public static void main(String[] args) {
        //创建一个不可修改的集合
        ArrayList<String> list = new ArrayList<>();
        //添加元素
        Collections.addAll(list,"zhangsan","lisi","wangwu");
        list.stream().forEach(new Consumer<String>() {
            @Override
            public void accept(String s) {
                System.out.println(s);
            }
        });
    }
}
