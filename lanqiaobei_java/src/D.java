import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class D {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int M = sc.nextInt();
		int[] a = new int[N];
		int[] b = new int[M];
		for (int i = 0; i < N; i++) {
			a[i] = sc.nextInt();
		}
		for (int i = 0; i < M; i++) {
			b[i] = sc.nextInt();
		}
		Set<Integer> set = new HashSet<>();
		int sum = N+M;
		for (int i = 0; i <N; i++) {
			for (int j = 0; j < M; j++) {
				 int tmp = a[i] + b[j];
				 if(did(tmp,sum)) {
					 set.add(tmp);
				 }
			}
		}
		System.out.println(set.size());
	}

	private static boolean did(int i, int j) {
		// TODO Auto-generated method stub
		if(i>j) {
			return false;
		}
		if(i<=2) {
			return true;
		}
		if(i%2==0) {
			return false;
		}
		for (int j2 = 3; j2 <Math.sqrt(j); j2+=2) {
			if(j%j2==0) {
				return false;
			}
		}
		return true;
	}
}
