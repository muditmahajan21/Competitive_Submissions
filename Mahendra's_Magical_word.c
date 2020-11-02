

    #include<string.h>
    #include<stdio.h>
         
    int main()
    {
    int l,k,j,t,i;
    char s[500];

    scanf("%d",&t);
    for(k = 1; k <= t; k++)
    {
    scanf("%d",&l);
    scanf("%s",&s);

    for(j=0;j<l;j++)
    {
        i=s[j];
        if(i <= 69)
            s[j]=67;
        else if(i>= 70 && i <= 72)
            s[j]=71;
        else if(i >= 73 && i <= 76)
            s[j]=73;
        else if(i >= 77 && i <= 81)
            s[j]=79;
        else if(i >= 82 && i <= 86)
            s[j]=83;
        else if(i >= 87 && i <= 90)
            s[j]=89;
        else if(i >= 97 && i <= 99)
            s[j]=97;
        else if(i >= 100 && i <= 102)
            s[j]=101;
        else if(i >= 103 && i <= 105)
            s[j]=103;
        else if(i >= 106 && i <= 108)
            s[j]=107;
        else if(i >= 109 && i <= 111)
            s[j]=109;
        else if(i >= 112 && i <= 122)
            s[j]=113;
        else if(i >=123 && i <=125)
            s[j]=113;
        else
            s[j]=67;
        

    }

    printf("%s",s);
    printf("\n");
    }


    return 0;
    }


    