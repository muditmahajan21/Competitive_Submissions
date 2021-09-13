import java.util.Scanner;

public class a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        for(int k=1;k<=t;k++)
        {
            int n=sc.nextInt();
            String s=sc.next();
            int flag=-1;
            int c=0;
            for (int  i=0;i<n;i++)
            {
                char ch=s.charAt(i);
                if(ch=='F'&&flag==-1)
                {
                    continue;
                }
                else if(ch=='X'&&flag==-1)
                {
                    flag=1;

                }
                else if(ch=='X'&&flag==0)
                {
                    flag=1;
                    c++;
                }
                else if(ch=='O'&&flag==-1)
                {
                    flag=0;
                }
                else if(ch=='O'&&flag==1)
                {
                    flag=0;
                    c++;
                }
                else
                    continue;

            }
            System.out.println("Case #"+k+": "+c);
        }
    }
}