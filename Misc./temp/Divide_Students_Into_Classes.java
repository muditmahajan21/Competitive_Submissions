
import java.util.Arrays;
import java.util.Scanner;

public class C {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t=sc.nextInt();
        while (t-->0)
        {
                int n=sc.nextInt();
                int arr[]=new int[n];
                for(int i=0;i<n;i++)
                {
                    arr[i]=sc.nextInt();

                }

           Map<Integer, Integer> mp = new HashMap<>();
 
        // Traverse through array elements and
        // count frequencies
            for (int i = 0; i < n; i++)
            {
                if (mp.containsKey(arr[i]))
                {
                    mp.put(arr[i], mp.get(arr[i]) + 1);
                }
                else
                {
                    mp.put(arr[i], 1);
                }
            }
            if(mp.size() == 12) System.out.println("yes");
            else System.out.println("no"); 
        }
        
    }

}
