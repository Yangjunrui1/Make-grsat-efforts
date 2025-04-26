package ao4_demo;

public class cat extends animal {
    public cat() {

    }

    public cat(int age, String color) {
        super(age, color);
    }

    @Override
    public void eat(String something) {
        System.out.println(getAge() + "岁的" + getColor() + "猫咪眯着眼睛吃" + something);
    }

    public void catchMoush() {
        System.out.println("猫抓老鼠");
    }

}
