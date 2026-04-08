package real_23B;

import java.util.Scanner;

public class D {
	public static void main(String[]args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		sc.close();
		int s = b-a;
		while(b<a*2) {
			b=b+s;
		}
		System.out.println(b-a*2);
	}

}
