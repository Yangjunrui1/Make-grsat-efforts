public class a11递归5阶乘 {
    public static void main(String[] args) {
        System.out.println(factorial(5));
    }
    private static int factorial(int n) {
        if (n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
}
