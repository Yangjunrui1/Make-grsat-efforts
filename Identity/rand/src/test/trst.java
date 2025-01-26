package test;
import java.util.Scanner;
import java.util.Random;//生成随机数
public class trst {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Random r = new Random();

        int[] arr = {1,2,3,4,5,6};


        for (int i = 0; i < arr.length; i++) {
            int b = r.nextInt(arr.length);
            int tmp = arr[i];
            arr[i] = arr[b];
            arr[b]=tmp  ;
        }
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }


    }

}
