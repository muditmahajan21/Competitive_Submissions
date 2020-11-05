try:
    test = int(input())
    for _ in range(test):
        flag = 1
        n = int(input())
        arr = list(map(int, input().split()))
        for i in range(len(arr)):
            if arr[i] != i + 1:
                if (i + 1) % arr[i] != 0:
                    flag = 0
        if flag == 1:
            print("YES")
        else:
            print("NO")
except:
    pass        