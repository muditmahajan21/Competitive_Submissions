import math
test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    my_sum = sum(arr)

    temp = n - 1 

    rem = math.ceil(my_sum / temp)

    ans = temp * rem 

    maximum = max(arr)

    if maximum > rem:
        ans = maximum * temp 
    
    ans -= my_sum

    print(ans)