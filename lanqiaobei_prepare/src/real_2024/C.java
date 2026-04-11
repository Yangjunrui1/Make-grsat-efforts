package real_2024;

import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] zhu = new int[100000];
        int i = 0;
        while(true){
            String s = sc.next();
            if(s.equals("add")){//添加到主队列
                int temp = sc.nextInt();
                zhu[0] += 1;

            }else if(s.equals("sync")){//同步到副队列
                int a = sc.nextInt();
                zhu[a] += 1;
            }else if(s.equals("query")){//查询最小队列
                int min = 1000000;
                for (int i1 = 0; i1 < N; i1++) {
                    if(zhu[i1]<min){
                        min = zhu[i1];
                    }
                }
                System.out.println(min);
            }
        }
    }
}
