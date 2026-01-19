package for_while;

public class java2019_for {
    public static void main(String[] args) {
        //判断数字中包含2，0.1.9这四个数的式子，
        //函数的格式
        int sum = 0;
        for (int i = 0; i <= 2019; i++) {
            //函数jugde判断是否有
            if(jugde1(i)){
                sum+=i;
            }
        }
        System.out.println(sum);
    }
    private static boolean jugde1(int n) {
        while (n > 0) {
            int t = n % 10;
            if (t == 2 || t == 0 || t == 1 || t == 9) {
                return true;
            }
            n=n/10;
        }
        return false;
    }
}
