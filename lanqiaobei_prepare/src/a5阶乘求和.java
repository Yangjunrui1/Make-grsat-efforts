import java.math.BigInteger;

public class a5阶乘求和 {
//    public static void main(String[] args) {
//        //求1!+2!+3!+4!+5!-20；
//        BigInteger sum = BigInteger.ZERO;//用来存储阶乘的和
//        for (int i = 1; i <= 20; i++) {
//            BigInteger tmp = BigInteger.ONE;//用来存储当前阶乘的值
//            for (int j = 1; j <= i; j++) {
//                tmp = tmp.add(BigInteger.valueOf(j + 1));
//            }
//            sum = sum.add(tmp);//将当前阶乘的值加到总和中
//        }
//        System.out.println(sum);
//    }

// ... existing code ...
    public static void main(String[] args) {
        //求 1!+2!+3!+4!+5!-20；
        BigInteger sum = BigInteger.ZERO;//用来存储阶乘的和
        for (int i = 1; i <= 20; i++) {
            BigInteger tmp = BigInteger.ONE;//用来存储当前阶乘的值
            for (int j = 1; j <= i; j++) {
                tmp = tmp.multiply(BigInteger.valueOf(j));
            }
            sum = sum.add(tmp);//将当前阶乘的值加到总和中
        }
        System.out.println(sum);
    }
// ... existing code ...
}