try:
    test = int(input())
    for _ in range(test):
        k = -1 
        n = int(input())
        arr = list(map(int, input().split()))
        res = [0] * n
        
        temp = 4000000

        for i in range(n):
            if arr[i] == i + 1:
                res[i] = temp 
                temp -= 1 

        for i in range(n):
            if arr[i] != (i + 1):
                res[i] = res[arr[i] - 1]

        for ele in res:
            print(ele, end = " ")

        print("")
except:
    pass