package com.test;
import java.util.HashMap;
import java.util.Map;
public class MapDemo1 {
    public static void main(String[] args) {
        //1,创建Map的对象
        Map<String, String> m = new HashMap<>();
        //添加元素
        m.put("郭靖", "黄蓉");
        m.put("杨过", "小龙女");
        m.put("韦小宝", "沐剑屏");

        boolean key = m.containsKey("郭靖");//判断是否包含指定的键
        boolean value = m.containsValue("小龙女");//判断是否包含指定的值
        System.out.println(key);
        System.out.println(value);
        int size = m.size();//返回键值对的个数
        System.out.println(size);
        System.out.println(m);
    }
}
