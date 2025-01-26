package test;
import java.util.Scanner;
public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        /*int[] arr = new int[] {1,2,3,4};
        int[] arr1 = {1,2,34,5};
        String[] arr3= new String[]{"zhangsan","lisi","wangwu"};
        double[] arr4 = new double[]{1.43,43.3,34.4};
        System.out.println(arr1);
        System.out.println(arr.length);
        for(int i = 0;i< arr.length;i++)
        {
            System.out.println(arr1[i]);
        }
        for (int i = 0; i < arr.length; i++) {

        }*/
//        int[] arr = {1,4,5,7,8,9};
//        int sum = 0;
//        for (int i = 0; i < arr.length; i++) {
//            sum+=arr[i];
//        }
//        System.out.println(sum);
        int[] arr1 = {1,3,5,7,8};
        int tmp;
        int j= arr1.length;
        for(int i= 0;i < j/2;i++) {
           tmp = arr1[i];
           arr1[i] =arr1[j];
           arr1[j] = tmp;
           j--;
        }


    }
}
