#include<stdio.h>
int main()
{
    int test, test_counter;
    scanf("%d", &test);

    for(test_counter = 0; test_counter < test; test_counter++)
    {
        int chef_power, rick_power;
        scanf("%d %d", &chef_power, &rick_power);

        int temp_chef = chef_power;
        int temp_rick = rick_power;

        int count1 = 0, count2 = 0;

        while(temp_chef % 9 != 0)
        {
            temp_chef++;
        }

        while(temp_rick % 9 != 0)
        {
            temp_rick++;
        }

        count1 = temp_chef / 9;
        count2 = temp_rick / 9;

        if(count2 <= count1)
        {
            printf("1 %d\n", count2);
        }
        else if(count1 < count2)
        {
            printf("0 %d\n", count1);
        } 
    }
return 0;
}