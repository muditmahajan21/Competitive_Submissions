try:
    test = int(input())
    for _ in range(test):
        n = int(input())
        arr = list(map(int, input().split()))
        arr.sort(reverse = True)

        if n == 1:
            ans = arr[0]
        else:
            temp1 = arr[0]
            temp2 = arr[1]

            for i in range(2, n):
                if temp1 <= temp2:
                    temp1 += arr[i]
                else:
                    temp2 += arr[i]
            if temp1 >= temp2:
                ans = temp1 
            else:
                ans = temp2
        print(ans)
except:
    pass