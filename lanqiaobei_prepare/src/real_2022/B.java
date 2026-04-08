package real_2022;

public class B {
	public static void main(String[]args) {
		System.out.println(3);
		int[] res = {1,1,
				1,2,1,4,5,4,1,2,9,0,5,10
				,11,14,9,0,11,18,9,11,11,15,17,9
				,23,20,25,16,29,27,25,11,17,4,29,22
				,37,23,9,1,11,11,33,29,15,5,41,46
		};
		int count = 49;
		while(true) {
			count++;
			if(did(count,res)) {
				break;
			}
			System.out.println("---");
		}
		System.out.println(count);
	}

	private static boolean did(int count, int[] res) {
		for(int i=2;i<=49;i++) {
			if((count%i)!=res[i]) {
				return false;
			}
		}
		return true;
	}

}
