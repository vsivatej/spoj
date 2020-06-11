import java.math.BigInteger;  
import java.util.*;  
public class Julka {    
    public static void main(String args[]){    
        int t=10;   
        Scanner in = new Scanner(System.in);  
        while(t>0){
        BigInteger a = in.nextBigInteger();  
        BigInteger b=in.nextBigInteger(); 
        BigInteger x=a.add(b);
        x=x.divide(BigInteger.valueOf(2));
        System.out.println(x);
        System.out.println(x.subtract(b));t=t-1;


      }
    }
} 