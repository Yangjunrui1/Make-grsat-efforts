import java.util.Scanner;

public class fsdaf {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("请输入棋盘的大小 n：");
        int n = scanner.nextInt();

        System.out.print("请输入落棋的位置（行 列）：");
        int row = scanner.nextInt();
        int col = scanner.nextInt();

        printChessboard(n, row, col);

        scanner.close();
    }

    public static void printChessboard(int n, int pieceRow, int pieceCol) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == pieceRow && j == pieceCol) {
                    System.out.print("* ");
                } else {
                    System.out.print(". ");
                }
            }
            System.out.println();
        }

        System.out.print("列编号：");
        for (int j = 0; j < n; j++) {
            if (j < 10) {
                System.out.print(j + " ");
            } else if (j < 36) {
                System.out.print((char)('a' + (j - 10)) + " ");
            } else {
                System.out.print("? ");
            }
        }
        System.out.println();

        System.out.print("行编号：");
        for (int i = 0; i < n; i++) {
            if (i < 10) {
                System.out.print(i + " ");
            } else if (i < 36) {
                System.out.print((char)('a' + (i - 10)) + " ");
            } else {
                System.out.print("? ");
            }
        }
        System.out.println();
    }
}
