package tututu_2025;

import java.math.BigInteger;

public class B {
    public static void main(String[] args) {
        long count = 0;
        while (true) {
            count+=20250412;
            if((count+20250412)%20240413==0&&(count+20240413)%20250412==0){
                System.out.println(count);
                break;
            }
        }

    }
}
