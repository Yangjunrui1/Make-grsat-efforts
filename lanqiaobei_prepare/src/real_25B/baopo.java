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
        double ans = 0;
        int dd = 0;
        for (int i = 0; i < count-1; i++) {
            double temp = 9999;
            for (int i1 = 0; i1 < count; i1++) {
                if(dis[dd][i1]==0){
                    temp = 0;
                    dd = i1;
                    break;
                }
                if(dis[dd][i1]<temp){
                    temp = dis[dd][i1];
                    dd = i1;
                }

            }
            ans+=temp;
        }
        System.out.println(ans);

    }
}
