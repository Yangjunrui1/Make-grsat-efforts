package ao4_demo;

public class Dog extends animal{
    public Dog() {
    }

    public Dog(int age, String color) {
        super(age, color);
    }
    //行为
    @Override
    public void eat(String something) {
        System.out.println(getAge()+"岁的小"+getColor()+"狗两只前腿死死的抱着"+something+"吃");
    }

    public void lookHome() {
        System.out.println("狗再看家");
    }
}
