#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int index, size, counter = 0, count = 0, i, j, temp = 0, swap = 0;
        cin >> size;
        int arr[size][size];

        //Take input.
        for(i = 0; i < size; i++)
        {
            for(j = 0; j < size; j++)
            {
                cin >> arr[i][j];
            }
        } 

        //Main driver code.
        for(index = size - 1; index > 0; index--)
        {
            temp = arr[index][index - 1] + 1;
            if(temp != arr[index][index])
            {
                count++;
                counter = index + 1;

                //Swapping of elements of the array.
                for(i = 0; i < counter; i++)
                {
                    for(j = i; j < counter; j++)
                    {
                        swap = arr[i][j];
                        arr[i][j] = arr[j][i];
                        arr[j][i] = swap;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}