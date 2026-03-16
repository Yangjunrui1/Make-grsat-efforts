package real_25B;

public class high_town {
    public static void main(String[] args) {
        int count = 0;
        System.out.println(13%10);
        for (int i = 1; i <= 2025; i++) {
            long temp = (long)i * i * i;//记住数据会溢出，需用long
            if (temp % 10 == 3){
                count++;
            }
        }

        System.out.println(count);
    }
}
