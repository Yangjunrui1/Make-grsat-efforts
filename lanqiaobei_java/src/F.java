import java.util.Scanner;

public class F {
	public static void main() {
		Scanner sc = new Scanner(System.in);
		System.out.println(22);
		int n = sc.nextInt();
		int[] x = new int[n];
		int[] y = new int[n];
		int[] r = new int[n];
		double[][] L = new double[n][n];
		for (int i = 0; i < n; i++) {
			x[i] = sc.nextInt();
			y[i] = sc.nextInt();
			r[i] = sc.nextInt();
		}
		for(int i = 0;i<n;i++) {
			for(int j = i+1;j<n;j++) {
				L[i][j] = did(x[i],y[i],r[i],x[j],y[j],r[j]);
				L[j][i] = L[i][j];
			}
		}
		//然后求最佳距离；
		int[] hash = new int[n];//更新是否被访问
		double[] min_L = new double[n];//更新最近的节点
		//把零节点当作初始节点；
		for(int i = 0;i<n;i++) {
			min_L[i] = L[0][i];
		}
		hash[0] = 1;
		int k = 0;
		double sum = 0;//储存权值
		for(int j = 0;j<n-1;j++) {//选出候选边中最小者
			double min = 100000;
			for(int w = 0;w<n;w++) {
				if(hash[w]==0&&min_L[w]<min) {
					min = min_L[w];
					k = w;
				}
			}
			hash[k] = 1;
			sum+=min;
			for(int i = 0;i<n;i++) {
				if(hash[i]==0&&L[k][i]<min_L[i])
				min_L[i] = L[k][i];
			}
		}
		System.out.println(sum);
		
	}

	private static double did(int i, int j, int k, int l, int m, int n) {
		// TODO Auto-generated method stub
		double x = i-l;
		double y = j-m;
		double re = Math.sqrt(Math.pow(x,2)+Math.pow(y,2));
		if(re<=k+n) {
			return 0;
		}
		return re-k-n;
	}

}
