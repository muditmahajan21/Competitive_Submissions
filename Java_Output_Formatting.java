import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++)
            {
                String s1=sc.next();
                int x=sc.nextInt();
                //Complete this line
                for(int k = s1.length(); k < 15; k++){
                    s1 += " ";
                }
                System.out.printf("%s", s1);
                System.out.printf("%03d\n", x);
            }
            System.out.println("================================");

    }
}



