package ao4_demo;

public class person {
    private int age;
    private String name;
    public person() {

    }
    public person(int age, String name) {
        this.age = age;
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
//    public void keepPet(Dog dog,String something){
//        System.out.println("年龄为"+getAge()+"岁的"+name+"养了一只"+dog.getColor()+"颜色的"+dog.getAge()+"岁的狗");
//        dog.eat(something);
//
//    }
//    public void keepPet(cat cat,String something){
//        System.out.println("年龄为"+getAge()+"岁的"+name+"养了一只"+cat.getColor()+"颜色的"+cat.getAge()+"岁的猫");
//        cat.eat(something);
//    }
    public void keepPet(animal animal,String something){
        if (animal instanceof Dog) {
            Dog dog = (Dog)animal;//向下转型

        } else if (animal instanceof cat) {
            cat cat = (cat)animal;
        }
        else {
            System.out.println("没有这种动物");
        }
        System.out.println("年龄为"+getAge()+"岁的"+name+"养了一只"+animal.getColor()+"颜色的"+animal.getAge()+"岁的动物");
        animal.eat(something);
    }
}
