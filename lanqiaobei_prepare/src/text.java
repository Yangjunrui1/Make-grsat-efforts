import java.util.Random;
import java.util.Scanner;

public class text {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);

        int targetNumber = random.nextInt(100) + 1;
        int guessCount = 0;
        int userGuess;

        System.out.println("在1 到 100 之间的整数，开始猜吧！");

        do {
            System.out.print("请输入你的猜测：");
            userGuess = scanner.nextInt();
            guessCount++;

            if (userGuess > targetNumber) {
                System.out.println("太大了！再试一次。");
            } else if (userGuess < targetNumber) {
                System.out.println("太小了！再试一次。");
            }
        } while (userGuess != targetNumber);

        System.out.println("恭喜你，猜对了！");
        System.out.println("总共猜了 " + guessCount + " 次。");

        scanner.close();
    }
}
