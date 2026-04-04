package real_2024B;

import java.util.Scanner;

public class F {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();//总共有多少个星球
        int m = sc.nextInt();//总共有多少个传送门
        int q = sc.nextInt();//盲盒的个数
        int sum = 0;//每个盲盒的权值
        int[][] G = new int[n+1][n+1];//邻接矩阵的图
        for (int i = 0; i < m; i++) {//创建图
            int x = sc.nextInt();
            int y = sc.nextInt();
            G[x][y] = G[y][x] = 1;
        }
        for (int i = 0; i < q; i++) {
            int z = sc.nextInt();//盲盒的起点
            int w = sc.nextInt();//盲盒的距离
            sum += BFS(z, w, G, n);
        }
        double v = sum * 1.0 / q;
        System.out.println("%.2f"+v);//保留两位小数
    }
    public static int BFS(int z, int w, int[][] G, int n) {
        boolean visited[] = new boolean[n+1];//标记数组是否访问过
        visited[z] = true;//标记起点,已经访问过
        int count = 1;//计数器
        int[] queue = new int[n+1];//队列，存放当前层节点
        queue[0] = z;//添加起点，层数从0开始
        for (int i = 0; i < w; i++) {//层数小于距离w
            for (int i1 = 1; i1 < n+1; i1++) {
                if (G[queue[i]][i1] == 1 && !visited[i1]) {
                    visited[i1] = true;//标记访问过
                    queue[++count] = i1;//添加到队列中
                }
            }
        }
        return count;
    }
}
