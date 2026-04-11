package chap4.excercise.ex6;

public class PointDemo {
	
	public static void main(String[] args){
		
	    Point p1 = new Point(3,4);	    	    
	    Point p2 = new Point(5);
	    
	    System.out.println(p1.distance());  
	    System.out.println(p2.distance());  
	    System.out.println(p1.distance(6,8));  
	    System.out.println(p1.distance(p2));   
	}
}



