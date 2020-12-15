test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))

    temp_sum = sum(arr) 

    for counter in range(n, 0, -1):
        if temp_sum % counter != 0:
            continue 
        goal = temp_sum // counter  
        temp = 0 
        fail = False 
         
        for i in range(n):
            temp += arr[i]  
            if temp > goal:
                fail = True 
                break 
            elif temp == goal:
                temp = 0 

        if (not(fail)):
            print(n - counter) 
            break