import java.util.Scanner;

public class shuzufanzhuan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        int[] arr = new int[count];
        for (int i = 0; i < count; i++) {
            arr[i] = sc.nextInt();
        }
        int[][] arr1 = new int[10][2];
        if (count == 0) {
            System.out.println(0);
            return;
        }
        int temp = 1;
        int current = arr[0];
        for (int i = 1; i < count; i++) {
            if(arr[i]==current){
                temp += 1;
            }else {
                if(temp>arr1[current][0]){
                    arr1[current][1] = arr1[current][0];
                    arr1[current][0] = temp;


                } else if (temp > arr1[current][1]) {
                    arr1[current][1] = temp;
                }
               current = arr[i];
               temp = 1;
            }
        }
        if (temp > arr1[current][0]) {
            arr1[current][1] = arr1[current][0];
            arr1[current][0] = temp;
        } else if (temp > arr1[current][1]) {
            arr1[current][1] = temp;
        }
        int max = 0;
        for (int i = 0; i < 10; i++) {
            if(i*(arr1[i][0]+arr1[i][1])>max){
                max = i*(arr1[i][0]+arr1[i][1]);
            }
        }
        System.out.println(max);
    }
}
