package chap4.excercise.ex6;

public class Point {
	private int x;
	private int y;
 
	public Point(int x, int y){
		this.x = x;
		this.y = y;
	}
	
	/**
	 *重载的构造器 初始化对角线上的点
	 **/
	public Point(int x){
        this(x,x);//调用本类的两个整数类型参数的构造器
    }
	
	/**
	 *  计算当前点到原点的距离 
	 * */
	public double distance(){ //当前点就是this
		return Math.sqrt(this.x*this.x + this.y*this.y); 
	}
	/**
	 *计算当前点到另外一个坐标的距离
	 */
	public double distance(int x, int y){
		return Math.sqrt((this.x-x)*(this.x-x)+(this.y-y)*(this.y-y));
	}
	
	/** 
	 * 计算当前点到另外一点的距离 
	 * */
	public double distance(Point other){
		//重用本类的方法
		return this.distance(other.x, other.y);
	}

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}
	
}








