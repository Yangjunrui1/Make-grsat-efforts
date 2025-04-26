package ao4_demo;

public class test {
    public static void main(String[] args) {
        person p1 = new person( 19,"老王");
        Dog d = new Dog(1, "绿色");

        p1.keepPet(d, "骨头");

        person p2 = new person( 20,"老李");
        cat c = new cat(2, "黄色");
        p2.keepPet(c, "鱼");
    }
}
