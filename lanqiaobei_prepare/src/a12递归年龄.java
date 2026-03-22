public class a12递归年龄 {
    public static void main(String[] args) {
        System.out.println(did(5));
    }

    private static int did(int age) {
        if (age == 0) {
            return 10;
        }
        return did(age - 1) + 2;
    }
}
