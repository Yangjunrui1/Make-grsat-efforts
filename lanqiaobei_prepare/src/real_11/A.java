package real_11;

public class A {
	  public static void main(String[] args) {
		  int count = 0;
		  for(int i=2;i<=22;i++) {
			  count+=did(i);
		  }
		  System.out.println(count);
	  }

	  private static int did(int i) {
		// TODO Auto-generated method stub
		 int con = 0;
		 while(i>0) {
			 int tmp = i%10;
			 i/=10;
			 if(tmp==2) {
				 con++;
			 }
		 }
		return con;
	  }
}
