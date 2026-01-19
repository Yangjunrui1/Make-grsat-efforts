package for_while;

public class java2015_for {
    public static void main(String[] args) {
        int count = 0;
        for (int i = 1; i < 10000; i++) {
            if (judege(i)) {
                count++;
            }
        }
        System.out.println(count);
    }
    private static boolean judege(int i) {
        int lifang = i * i * i;
        String lifang_s = Integer.toString(lifang);
        String s = Integer.toString(i);
        if (lifang_s.endsWith(s)) {
            return true;
        }
        return false;
    }
}
