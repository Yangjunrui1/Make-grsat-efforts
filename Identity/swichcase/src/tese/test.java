package tese;
import java.util.Scanner;
public class test {
    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        int a = sc.nextInt();
//        switch(a) {
//            case 1->System.out.println("跑步");
//            case 2->System.out.println("游泳");
//            case 3->System.out.println("打篮球");
//            case 4->System.out.println("打游戏");
//            default->System.out.println("休息");
//
//        }for(int i = 1;i<=5;i++){
//            System.out.println("第"+i);
//        }
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = a;
        int c = 1;
        int f = 0;
        int size = 0;
        while(a>0){
            size++;
            a/=10;
            c*=10;
        }c/=10;
        int w = 1;
        System.out.println(c);
        for(int i = 1;i<size/2;i++){
            if(b/c%10!=b/w%10) {
                f = 1;
            }
            c/=10;
            w*=10;
        }
        if(f==0)
            System.out.println(b+"是回文数");
        if(f==1)
            System.out.println(b+"不是回文数");
    }
    }
