package com.test_eeee;
import java.util.Random;
public class test {
    public static void main(String[] args) {
        // 把一个一维数组中的数据0-15打乱顺序放到一个二维数组中
        int[] arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
        Random r = new Random();
        for (int i = 0; i < arr.length; i++) {
            //获取到随机索引
            int index = r.nextInt(arr.length);
            int tmep = arr[i];
            arr[i] = arr[index];
            arr[index] = tmep;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        int[][] arr2 = new int[4][4];
        for (int i = 0; i < arr.length; i++) {
            arr2[i / 4][i % 4] = arr[i];
        }

    }
}
