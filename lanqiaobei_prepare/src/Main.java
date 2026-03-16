public class Main {
    public static void main(String[] args) {
        long n = 10000;
        while(true){
            if((n + 20250412) % 20240413 == 0){
                if ((n + 20240413) % 20250412 == 0) {
                    System.out.println(n);
                    break;
                }
            }
            n += 20250412;
        }
    }
}