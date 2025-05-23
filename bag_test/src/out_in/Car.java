package out_in;

public class Car {
    String carName;
    int carAge;;
    String carColor;

    public void show1() {
       //会报错，只能用外部的变量 System.out.println(engineName);
    }
    class Engine{
        String engineName;
        int engineAge;

        public void show() {
            System.out.println(engineName);
            System.out.println(engineAge);
        }
    }
}
