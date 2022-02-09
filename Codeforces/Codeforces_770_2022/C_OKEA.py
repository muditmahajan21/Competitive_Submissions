
test = int(input())
for _ in range(test):
    k, n = map(int, input().split())
    flag = True
    a = [0] * 100010
    b = [0] * 100010
    a[0] = b[0] = 1
    for i in range(1, n):
        a[i] = a[i - 1] + k
        b[i] = b[i - 1] + a[i]
        if b[i] % (i + 1):
            flag = False
            break
    
    if(not(flag)):
        print("NO")
    else:
        print("YES")
        for i in range(1, k + 1):
            for j in range(1, n + 1):
                print( (j - 1) * k + i, end = " " )
            print("")
