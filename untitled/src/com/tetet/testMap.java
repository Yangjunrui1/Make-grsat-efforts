package com.tetet;

import java.util.ArrayList;
public class testMap {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("张无忌");
        list.add("赵敏");
        list.add("张三丰");
        list.add("金毛狮王");

        list.stream().filter(name->name.startsWith("张")).filter(name->name.length()==3).forEach(System.out::println);
        /*
        ArrayList list1 = new ArrayList();
        for (String name : list) {
            if (name.startsWith("张")) {
                list1.add(name);
            }
        }
        System.out.println(list1);*/
    }
}
