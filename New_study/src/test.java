import java.net.StandardSocketOptions;
public class test {
//  public static void main(String[] args) {
//      char word = 'd', word2 = '@';
//      int p = 23045, p2 = 45213;
//      System.out.println("d在Unicode表中的位置是：" + (int) word);
//      System.out.println("@在Unicode表中的位置是：" + (int) word2);
//      System.out.println("Unicode表中的第23045位是"+(char)p);
//      System.out.println("Unicode表中第45213位是"+(char)p2);
//      boolean a=true;
//
//    }

//    static final double P=3.1415926D;//只能被赋值一次
//    static final double P1 = 1235.3;
//    static int age =  19;
//    public static void main(String[] args) {
//        int a=10,b=3;
//        System.out.println(750*(a+b));
//        age =  33;
//        System.out.println(age);
//    }
//        public static void main(String[] args) {
//            char ch = 'g';
//            int a = (int)ch;
//            if(a==103)
//            {
//                System.out.println("Yes");
//            }
//            else {
//                System.out.println("No");
//            }
//        }
//    public static void main(String[] args) {
//        int a,b,c;
//        a = 15;
//        c=b=a+4;
//        System.out.println("c的数值为："+c);
//        System.out.println("b的数值为："+b);
//    }
//        public static void main(String[] args) {
//        int num1 = 4;
//        int num2 = 5;
//            System.out.println("大于>的返回值为："+(num1>num2));
//            System.out.println("小于<的返回值为："+(num1<num2));
//            System.out.println("等于==的返回值为："+(num1==num2));
//
//    }
        public static void main(String[] args) {
            int boy = 15;
            int girls = 17;
            int totle = boy+girls;
            boolean r1 = ((boy>girls)&&(totle>30));
            boolean r2 = ((boy>girls)||(totle>30));
            System.out.println("男生人数大于女生人数并且总人数大于30"+r1);
            System.out.println("男生人数大于女生人数或者总人数大于30"+r2);
    }
}