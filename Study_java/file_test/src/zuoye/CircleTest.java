package chap4.excercise.ex7;

public class CircleTest {

	public static void main(String[] args) {
		Circle c1 = new Circle(10);
		Circle c2 = new Circle(3);

		System.out.println(c1.getArea());

		c2.enlarge(5);  //通常指放大、扩容、增大尺寸

		int diff = c1.compareTo(c2);
		if(diff>0){
			System.out.println("第1个圆大");
		}else if(diff<0){
			System.out.println("第2个圆大");
		}else{
			System.out.println("两个圆大小相同");
		}
	}
}
