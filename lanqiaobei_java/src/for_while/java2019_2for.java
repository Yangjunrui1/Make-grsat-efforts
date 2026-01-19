package for_while;

public class java2019_2for {
    public static void main(String[] args) {
        int width = 324;
        int height = 2019;
        int count = 0;
        while (width != height) {
            if (width > height) {
                int tmp = width;
                width = height;
                height = tmp;
            }
            height = height-width;
            count++;
        }
        System.out.println(count+1);
    }
}
