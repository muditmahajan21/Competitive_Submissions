#include <stdio.h>
void word(int n)
{
    switch(n)
    {
            case 1:printf("one ");
                break;
            case 2:printf("two ");
                break;
            case 3:printf("three ");
                break;
            case 4:printf("four ");
                break;
            case 5:printf("five ");
                break;
            case 6:printf("six ");
                break;
            case 7:printf("seven ");
                break;
            case 8:printf("eight ");
                break;
            case 9:printf("nine ");
                break;
            case 10:printf("ten ");
                break;
            case 11:printf("eleven ");
                break;
            case 12:printf("tweleve");
                break;
            case 13:printf("thirteen ");
                break;
            case 14:printf("fourteen ");
                break;
            case 15:printf("fifteen ");
                break;
            case 16:printf("sixteen ");
                break;
            case 17:printf("seventeen ");
                break;
            case 18:printf("eighteen ");
                break;
            case 19:printf("ninteen ");
                break;
            case 20:printf("twenty ");
                break;
            case 21:printf("twenty one ");
                break;
            case 22:printf("twenty two ");
                break;
            case 23:printf("twenty three ");
                break;
            case 24:printf("twenty four ");
                break;
            case 25:printf("twenty five ");
                break;
            case 26:printf("twenty six ");
                break;
            case 27:printf("twenty seven ");
                break;
            case 28:printf("twenty eight ");
                break;
            case 29:printf("twenty nine ");
                break;
    }
}
int main()
{
    int h,m;
    scanf("%d",&h);
    scanf("%d",&m);
    if(m==0)
    {
            word(h);
        printf("o' clock");
    }
    
    if(m==1)
    {
        word(m);
        printf("minute past ");
        word(h);
    }

    if(m>=2&&m<30)
    {
         if(m==15)
          {
             printf("quarter past ");
             word(h);
         }
        else
        {
         word(m);
        printf("minutes past ");
        word(h);
        }
    }
    if(m==30)
    {
        printf("half past ");
        word(h);
    }
    if(h==12)
        h=0;
    if(m>30&&m<45)
    {
        word(60-m);
        printf("minutes to ");
        word(h+1);
    }
    if(m==45)
    {
        printf("quarter to ");
        word(h+1);
    }
    if(m>45&&m<59)
    {
            word(60-m);
        printf("minutes to ");
        word(h+1);
    }
    if(m==59)
     {
            word(60-m);
        printf("minute to ");
        word(h+1);
    }
    return 0;
}
