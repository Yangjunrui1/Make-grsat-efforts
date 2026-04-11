package real_2025;

import java.util.Scanner;

public class E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int[] x = new int[n];
        int[] y = new int[n];
        int[] r = new int[n];
        double[][] dis = new double[n][n];
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
            r[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            for (int i1 = i+1; i1 < n; i1++) {
                dis[i][i1] =didi(x[i],y[i],r[i],x[i1],y[i1],r[i1]);
                dis[i1][i] = dis[i][i1];
            }
        }
        //prim算法
        double re = 0;
        boolean[] vis = new boolean[n];// 是否加入集合
        int dd = 0;
        for (int i = 0; i < n-1; i++) {
            double min = 99999;
            for (int i1 = 0; i1 < n; i1++) {
                if(dis[dd][i1]==0&&!vis[i1]){
                    min=0;
                    dd = i1;
                    break;
                }
                if(dis[dd][i1]<min&&!vis[i1]){
                    min = dis[dd][i1];
                    dd = i1;
                }
            }
            re += min;
        }
        System.out.printf("%.2f",re);
    }

    private static double didi(int x, int i, int i1, int x1, int i2, int i3) {
        int a = x-x1;
        int b = i-i2;
        double l = Math.sqrt(a*a+b*b);
        if(l<=i1+i3){
            return 0;
        }
        return l-i1-i3;
    }
}

