package for_while;

public class java2018_while2 {
    public static void main(String[] args) {
        int i = 1;
        while (true) {

            i++;
            if (judege(i)) {
                System.out.println("一开始共有" + i + "个香蕉");
                break;
            }
        }

    }

    public static boolean judege(int i) {
        if (i % 5 != 1) {
            return false;
        }
        i = i-i/5;
        if (i % 5 != 2) {
            return false;
        }
        i = i -i/5;
        if (i % 5 != 3) {
            return false;
        }
        i = i - i/5;
        if (i % 5 != 4) {
            return false;
        }
        i = i - i/5;
        return i%5 == 0;
    }
}
