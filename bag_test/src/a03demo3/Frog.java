package a03demo3;

public class Frog extends Animal implements swim{
    public Frog() {

    }
    public Frog(String name, int age) {
        super(name, age);
    }
    @Override
    public void eat() {
        System.out.println("青蛙吃虫子");
    }

    @Override
    public void swims() {
        System.out.println("青蛙在游泳");
    }
}
