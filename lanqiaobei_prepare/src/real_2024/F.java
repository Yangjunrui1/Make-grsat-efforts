package real_2024;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class F {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int Q = sc.nextInt();
        int[][] dd = new int[N+1][N+1];
        for (int i = 0; i < M; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            dd[a][b] = 1;
            dd[b][a] = 1;
        }
        double re = 0;
        for (int i = 0; i < Q; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            re+=BFS(x,y,dd,N);
        }
        System.out.printf("%.2f",re/Q);
    }
    static double BFS(int x,int y,int[][] dd,int N) {
        boolean [] visited = new boolean[N+1];//判断是否访问过
        visited[x] = true;//初始化起点
        double count = 1;//计数器
//        for (int i = 0; i < y; i++) {
//            boolean[] visited1 = new boolean[N+1];//判断是否访问过
//            for (int i1 = 0; i1 < N; i1++) {
//                if(!visited[i1]&&dd[x][i]==1){
//                    count++;
//                    visited[i1] = true;
//                }
//            }
//        }
        Queue< Integer> q = new LinkedList<>();
        q.add(x);//添加起点
        int[] dist = new int[N+1];
        dist[x] = 0;//
        while (!q.isEmpty()) {
            int u = q.poll();//弹出队列
            if(dist[u]>=y) continue;//如果距离大于等于y，停止搜索
            for (int i = 0; i <= N; i++) {
                if(!visited[i]&&dd[u][i]==1){
                    count++;
                    visited[i] = true;//标记访问过
                    dist[i] = dist[u]+1;//更新距离
                    q.add(i);//添加到队列中
                }
            }
        }
        return count;
    }
}
