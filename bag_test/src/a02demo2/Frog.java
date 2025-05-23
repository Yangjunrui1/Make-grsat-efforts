package a02demo2;

public class Frog extends Animal{
    public Frog() {

    }
    public Frog(String name, int age) {
        super(name, age);//调用父类的构造器
    }
    @Override//需要重写抽象方法
    public void eat() {
        System.out.println("青蛙在吃虫子");
    }
}
