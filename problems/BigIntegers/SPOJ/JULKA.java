package problems.BigIntegers.SPOJ;

import java.math.BigInteger;
import java.util.Scanner;

public class JULKA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    
        BigInteger n = sc.nextBigInteger();
        BigInteger dif = sc.nextBigInteger();
    
        BigInteger soma = n.add(dif);
        BigInteger a = soma.divide(BigInteger.valueOf(2));
        BigInteger b = a.subtract(dif);
    
        System.out.print(a + "\n" + b);
    }
}
