package real_23B;

import java.util.Scanner;

public class A {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int count = 0;
		int num = 1;
		while(count!=n) {
			num++;
			if(did(num,10)&&did(num,8)&&did(num,16)) {
				count++;
			}
			if(count==n) {
				System.out.println(num);
				break;
			}
		}
	}

	private static boolean did(int num,int mod) {
		// TODO Auto-generated method stub
		int x = num;
		int ans = 0;
		while(x>0) {
			ans+=ans%mod;
			x/=mod;
		}
		return num%ans==0;
	}
	
}
