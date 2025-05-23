package a02demo2;

public class test {
    public static void main(String[] args) {
        Dog d = new Dog("招财", 5);
        Sheep s = new Sheep("lili", 3);
        Frog f = new Frog("豆豆", 4);
        d.eat();
        s.eat();
        f.eat();
        Animal[] animals = {d, s, f};
        for (Animal animal : animals) {
            animal.eat();
        }
    }
}
