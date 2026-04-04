package real_2024B;

public class B {
    public static void main(String[] args) {
        int count = 108;
        int max = 0;
        for (int i = 1; i <= count; i++) {
            if (did(i)) {
                max = i;
            }
        }
        System.out.println(max);
    }

    private static boolean did(int i) {
        if (i < 10) {
            return true;
        }
        int[] count = new int[i];
        int n = 0;
        int temp = i;

        if (i > 1 && i < 100) {
            n = 2;
            count[1] = temp % 10;
            count[0] = temp / 10;
        }
        if (i > 100) {
            n = 3;
            count[2] = temp % 10;
            count[1] = temp / 10 % 10;
            count[0] = temp / 10 / 10;
        }
        for (int i1 = n; i1 < i; i1++) {
            for (int i2 = 1; i2 <= n; i2++) {
                count[i1]+= count[i1-i2];
            }
            if (count[i1] == i) {
                return true;
            }
        }
        return false;
    }
}
