import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;



public class bopao2 {
    static int[] parent;//并查集，存储内容：每个节点的父节点

    static int find(int x) {
        if(parent[x] != x)//父节点不是自己，说明不是根节点
            parent[x] = find(parent[x]);//递归调用，找到根节点
        return parent[x];//返回根节点
    }
    static void union(int x,int y){
        parent[find(x)] = find(y);//将x的根节点指向y的根节点，合并两个节点
    }
    static class Edge implements Comparable<Edge>{
        int u,v;//边;作用:存储内容：起点，终点，长度
        double len;//长度
        Edge(int u,int v,double len){
            this.u = u;
            this.v = v;
            this.len = len;
        }
        //按照长度排序，小的在前，大的在后，升序，存储内容：边，长度
        public int compareTo(Edge o){
            return Double.compare(len,o.len);
        }
    }
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
        List<Edge> edges = new ArrayList<>();
        for (int i = 0; i < count; i++) {
            for (int j = i+1; j < count; j++) {
                double dx = x[i] - x[j];
                double dy = y[i] - y[j];
                double len = Math.sqrt(dx * dx + dy * dy);
                if (len <= r[i] + r[j]) {
                    edges.add(new Edge(i,j,0));
                }else if (len > r[i] + r[j]) {
                    edges.add(new Edge(i,j,len - r[i] - r[j]));
                }
            }
        }
        parent = new int[count];//创建并查集
        for (int i = 0; i < count; i++) {
            parent[i] = i;
        }
        Collections.sort(edges);
        double ans =0;
        int need = count - 1;
        for (Edge e:edges){
            if(need ==0) break;
            int u = e.u;//起点
            int v = e.v;//终点
            if(find(u) != find(v)){
                union(u,v);//合并两个节点
                ans+=e.len;//更新总长度
                need--;//更新需要的边数
            }

        }
        System.out.printf("%.2f",ans);
    }
}
