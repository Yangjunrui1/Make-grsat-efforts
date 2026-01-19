package for_while;

public class java2019_for2 {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 0; i <= 2019; i++) {
            if (judege2(i)) {
                sum+=i;
            }
        }
        System.out.println(sum);
    }
    private static boolean judege2(int i) {
        String s = Integer.toString(i);
        if (s.contains("2") || s.contains("0") || s.contains("1") || s.contains("9")) {
            return true;
        }
        return false;

    }
}
