package for_while;

public class java2018_for {
    public static void main(String[] args) {
        float money = 0;
        float daymoney = 1.0f;
        int day = 0;
        while (money < 108) {
            day++;
            money +=daymoney;
            daymoney+=2;
            System.out.println(daymoney);
        }
        System.out.println(day);
    }
}
