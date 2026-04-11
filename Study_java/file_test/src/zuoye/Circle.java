package chap4.excercise.ex7;

public class Circle {
	private double r; // 半径

	public Circle() {
		super();
	}

	public Circle(double r) {
		this.r = r;
	}

	public double getArea() {
		return Math.PI * r * r;
	}

	public double getR() {
		return r;
	}

	public void setR(double r) {
		this.r = r;
	}

	public void enlarge(int n) { // 将圆放大n倍的方法，无返回值
		r *= n; // 在方法内访问radius属性和n参数
	}

	public int compareTo(Circle anotherCircle) {
		// 比较当前圆和anotherCirlce圆的大小，返回值为int型
		if (this.r < anotherCircle.r)
			return -1;
		else if (this.r > anotherCircle.r)
			return 1;
		else
			return 0;
	}

}
