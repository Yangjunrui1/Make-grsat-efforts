package chap4.test.Ex1;

public class StudentTest {

	public static void main(String[] args) {
		Student stu1 = new Student("007","Bang",'男',40);
		Student stu2 = new Student("009","Rose",'女',41);
		
		System.out.print(stu1.toString());     //把对象转换成字符串，不重写时，直接打印地址	


		System.out.print(stu2.toString());
		System.out.println("当前学生人数为："+ Student.getCount());
		
		Student[] stu = new Student[2];
		stu[0]=stu1;
		stu[1]=stu2;
		
		for(int i=0; i<stu.length; i++){
			System.out.print(stu[i].toString());
		}
		System.out.println("当前学生人数为："+ Student.getCount());
	}

}
