package com.tetet;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Comparator;
public class FunctionDemo1 {
    public static void main(String[] args) {
        //需求，创建一个数组，进行逆序
        Integer[] arr = {6,7,2,1,9,4,10,3,8};
//        Arrays.sort(arr,new Comparator<Integer>() {
//            @Override//重写compare方法
//            public int compare(Integer o1, Integer o2) {//o1-o2为升序，o2-o1为降序
//                return o2-o1;//降序
//            }
//        });
//        Arrays.sort(arr,(Integer o1, Integer o2) -> {
//            return o2-o1;//降序
//        });
        //方法引用
        Arrays.sort(arr,FunctionDemo1::subtact); //使用subtact方法进行排序
        System.out.println(Arrays.toString(arr));
    }
    public static int subtact(int a,int b){
        return a-b;//返回a-b的结果
    }

}
