package real_2025;

import java.util.Scanner;

public class A {
	public static void main(String[]args) {
		Scanner sc =  new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int[] a = new int[n];
		int[] b = new int[m];
		//初始化，a b,
		for(int i = 0;i<n;i++) {
			a[i] = sc.nextInt();
		}
		
		for(int i = 0;i<m;i++) {
			b[i] = sc.nextInt();
		}
		
		int count = 0;
		for(int i = 0;i<n;i++) {
			for(int j =1;j<m;j++) {
				if(did(n,m,a[i]+b[i])) {
					count++;
				}
			}
		}
		System.out.println(count);
	}

	private static boolean did(int n, int m, int i) {
		// TODO Auto-generated method stub
		//判断是不是质数，
		//满足s<=n+m;
		for(int h = 2;h<=Math.sqrt(i);h++) {
			if(i%h==0) {
				return false;
			}
		}
		if(i>n+m) {
			return false;
		}
		return true;
		
	}
}
