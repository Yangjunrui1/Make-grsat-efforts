package chap4.test.Ex1;

public class Student {
	private String id;
	private String name;
	private char sex;
	private int age;
	
	private static int count=0;   //静态的、共享的、属于类的

	public Student() {    
		count++;
	}

	public Student(String id, String name, char sex, int age) {
		this.id = id;
		this.name = name;
		this.sex = sex;
		this.age = age;
		
		count++;
	}

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public char getSex() {
		return sex;
	}

	public void setSex(char sex) {
		this.sex = sex;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public static int getCount() {
		return count;
	}

	public static void setCount(int count) {
		Student.count = count;
	}
	
	public String toString(){
		return id+","+name+","+sex+","+age+"\n";
	}
}
