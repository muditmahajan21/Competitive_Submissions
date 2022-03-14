
import java.util.HashMap;
import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String seq=sc.nextLine().toLowerCase();
        String word = sc.nextLine().toLowerCase();
        HashMap<Character,Integer> mapSeq=new HashMap<>();
        HashMap<Character,Integer> mapWord=new HashMap<>();
        System.out.println(word);
        int flag=0;
        for(int i=0;i<seq.length();i++)
        {
            char ch= seq.charAt(i);
            if(mapSeq.containsKey(ch))
            {
                mapSeq.put(ch, mapSeq.get(ch)+1);
                if(mapSeq.get(ch)>1)
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                mapSeq.put(ch,1);
            }
        }
        if(flag==1)
        {
            System.out.println("New Language Error");

        }
        for(int i=0;i<word.length();i++)
        {
            char ch= word.charAt(i);
            if(mapWord.containsKey(ch))
            {
                mapWord.put(ch, mapWord.get(ch)+1);

            }
            else
            {
                mapWord.put(ch,1);
            }
        }
        String ans="";
        for(int i=0;i<seq.length();i++)
        {
            char ch= seq.charAt(i);
            if(mapWord.containsKey(ch))
            {
                for(int j=0;j<mapWord.get(ch);j++)
                {
                    ans+=ch;
                }
            }
        }
        System.out.println(mapWord);
        System.out.println(mapSeq);
        if(flag!=1)
        System.out.println(ans);


    }
}
//palskdjfieuryt93516247oh
//        Philacodist 2021