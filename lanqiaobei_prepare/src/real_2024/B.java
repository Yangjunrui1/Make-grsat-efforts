package real_2024;

public class B {
    public static void main(String[] args) {
        int re = 0;
        for(int i = 10000000;i>=1000000;i--){
            if (did(i)){
                System.out.println(i);
            }
        }
    }

    private static boolean did(int i) {
        int[] dd = new int[100];//储存数列
        int tmp = i;
        int j = 0;
        while(tmp>0){
            dd[j] = tmp%10;
            tmp = tmp/10;
            j++;
        }
        j--;
        int i1 = 0;
        int i2 = j;//这个j是上面那个j-1,为了避免重复计算；
        for (; i1 < i2; i1++, i2--) {
            int tmp1 = dd[i1];
            dd[i1] = dd[i2];
            dd[i2] = tmp1;
        }
        for(int w = j+1;w<100;w++){
            for(int q = 0;q<=j;q++){
                dd[w] += dd[w-q-1];
                if(dd[w] == i){
                    return true;
                }
                if(dd[w] > i){
                   return false;
                }
            }
        }
        return false;
    }
}
