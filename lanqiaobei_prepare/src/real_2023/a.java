package real_2023;

public class a {
    public static void main(String[] args) {
         int re = 0;
         for(int i = 1;;i++){
             if(check(i,2)&&check(i,10)&&check(i,8)&&check(i,16)){
                 re++;
                 if(re==2023){
                     System.out.println(i);
                     break;
                 }
             }
         }
    }

    private static boolean check(int i, int i1) {
        int temp = i;
        int re = 0;
        while(temp>0){
            re += temp%i1;
            temp = temp/i1;
        }
        return i%re==0;
    }
}
