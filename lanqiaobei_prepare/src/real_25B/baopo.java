package real_25B;

import java.util.Scanner;

public class baopo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        int[] x = new int[count];
        int[] y = new int[count];
        int[] r = new int[count];
        for (int i = 0; i < count; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
            r[i] = sc.nextInt();
        }
        double[][] dis = new double[count][count];
        for (int i = 0; i < count; i++) {
            for (int i1 = 0; i1 < count; i1++) {
                double temp = Math.sqrt((x[i] - x[i1]) * (x[i] - x[i1]) + (y[i] - y[i1]) * (y[i] - y[i1]));
                if (temp <= r[i] + r[i1]) {
                    dis[i][i1] = 0;
                }else {
                    dis[i][i1] = temp - r[i] - r[i1];
                }
            }

        }
        //prim算法
        boolean vis[] = new boolean[count];// 是否加入集合
        double minDis[] = new double[count];//最小距离
        for(int i = 0; i < count; i++) {
            minDis[i] = dis[0][i];
        }
        vis[0] = true;
        double ans = 0;
        for (int i = 1; i < count; i++) {
            int min = -1;//最小距离点
            double minValue = 1e18;//最小距离
            for (int i1 = 0; i1 < count; i1++) {
                if(vis[i1]==false && minValue > minDis[i1]){
                    min = i1;
                    minValue = minDis[i1];
                }
            }
            ans += minValue;
            vis[min] = true;
            for (int i1 = 0; i1 < count; i1++) {
                if(vis[i1] == false && minDis[i1] > dis[min][i1]) {
                    minDis[i1] = Math.min(minDis[i1], dis[min][i1]);
                }
            }
        }
        System.out.println( ans);
    }
}
