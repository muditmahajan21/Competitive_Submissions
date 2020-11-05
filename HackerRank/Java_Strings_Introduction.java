import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */

        int len = A.length() + B.length();
        System.out.println(len);
        if(A.compareTo(B) <= 0){
            System.out.println("No");
        }   
        else {
            System.out.println("Yes");
        }
        
        A = A.substring(0, 1).toUpperCase() + A.substring(1).toLowerCase();
        B = B.substring(0, 1).toUpperCase() + B.substring(1).toLowerCase();
        System.out.print(A + " " + B);
    }
}



