package real_2024B;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<List< Integer>> nums = new ArrayList<>();// 创建一个二维列表
        for (int i = 0; i < n; i++) {
            nums.add(new ArrayList<>());// 创建一个列表
        }
        while(sc.hasNext()){
            String command = sc.next();
            if (command.equals("add")) {
                int a = sc.nextInt();
                nums.get(0).add(a);
            } else if (command.equals("sync")) {
                int a = sc.nextInt();
                if(nums.get(a).size()<nums.get(0).size()){
                    nums.get(a).add(nums.get(0).get(nums.get(a).size()));//添加一个元素
                }
            }else {// query
                int min_count = Integer.MAX_VALUE;//最小元素个数
                for (int i = 1; i < n; i++) {//遍历所有列表
                    if(nums.get(i).size()==nums.get(0).size()) {//判读条件；列表元素个数小于最小元素个数
                        min_count ++;//获取最小的元素个数
                    }
                }
                System.out.println(min_count);//输出最小元素个数
            }
        }

    }
}
