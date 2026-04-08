package real_23B;

import java.math.BigInteger;
import java.util.Scanner;

public class F {
	public static void main(String[]args) {
		BigInteger big1 = new BigInteger("20");
		BigInteger big2 = new BigInteger("7");
		BigInteger big3 = big1.pow(1);
		BigInteger big4 = big3.mod(big2);
		
		System.out.println(big4);
		
	}

}
