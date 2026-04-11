package for_while;

import java.util.Scanner;

public class baopo {
	public static void main(String[]args) {
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
        boolean[] vis  = new boolean[count];//是否访问过
        double[] min_l = new double[count];//集合距离节点的最短距离\
        vis[0] = true;
        double ans = 0;
        for(int w = 0;w<count ;w++) {
        	min_l[w] = dis[0][w];
        }
        for(int i = 1;i<count;i++) {
        	int min = -1;
        	double min_re = Double.MAX_VALUE;//一个很大的值
        	for(int j = 0;j<count;j++) {
        		if(!vis[j]&&min_re>min_l[j]) {
        			min = j;
        			min_re = min_l[j];
        		}
        	}
        	ans +=min_re;
        	vis[min] = true;
        	for(int h = 0;h<count;h++) {
        		if(!vis[h]&&min_l[h]>dis[min][h]) {
        			min_l[h] = dis[min][h];
        		}
        	}
        }
        System.out.printf("%.2f%n",ans);
        
	}
}
