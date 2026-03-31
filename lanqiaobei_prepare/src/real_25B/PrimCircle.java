package real_25B;

import java.util.*;

public class PrimCircle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // 圆数量

        int[] x = new int[n];
        int[] y = new int[n];
        int[] r = new int[n];

        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
            r[i] = sc.nextInt();
        }
        // 建图：cost[i][j] = i 到 j 的桥长
        double[][] cost = new double[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    cost[i][j] = 0;
                    continue;
                }
                double dx = x[i] - x[j];
                double dy = y[i] - y[j];
                double dist = Math.sqrt(dx*dx + dy*dy);

                if (dist <= r[i] + r[j]) {
                    cost[i][j] = 0; //  already connected
                } else {
                    cost[i][j] = dist - r[i] - r[j]; // need bridge
                }
            }
        }
        // ------------------- Prim 算法开始 -------------------
        boolean[] vis = new boolean[n]; // 是否加入集合
        double[] minDist = new double[n]; // 到集合的最小距离
        Arrays.fill(minDist, 1e18);// 填充一个较大的值
        minDist[0] = 0; // 从 0 号点开始
        double ans = 0;

        for (int count = 0; count < n; count++) {
            // 1. 找「不在集合里」且距离最小的点 u
            int u = -1;
            double min = 1e18;// 填充一个较大的值
            for (int i = 0; i < n; i++) {
                if (!vis[i] && minDist[i] < min) {// 找到距离最小的点
                    min = minDist[i];
                    u = i;
                }
            }
            // 加入集合
            vis[u] = true;
            ans += min;
            // 2. 用 u 更新其他点的最小距离
            for (int v = 0; v < n; v++) {
                if (!vis[v] && cost[u][v] < minDist[v]) {
                    minDist[v] = cost[u][v];
                }
            }
        }

        System.out.printf("%.2f", ans);
    }
}