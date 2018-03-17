import java.util.*;
import java.math.*;

public class Solution {

    public static long mcd (long first, long second) { //Euclid rules
        while (second > 0) {
            long x=first%second;
            first=second;
            second=x;
        }
        return first;
    }
    
    public static long sm (long num) {
        long res= 1;
        for (long i=2;i<=num;i++) res = (i* (res) )/mcd(i, res);
        
        return res;
    } 
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t= in.nextInt();
        for(int a0=0;a0<t;a0++){
            int n = in.nextInt();
            System.out.println(sm(n));
        }
    }
}
