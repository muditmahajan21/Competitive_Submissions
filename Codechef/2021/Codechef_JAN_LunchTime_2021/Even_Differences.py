
test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    c = 0
    e = 0

    for i in range(n):
        if(arr[i] % 2 != 0):
            c += 1
        else:
            e += 1
    if c == n or e == n:
        ans = 0 
    else:
        ans = min(c, e)
 
    print(ans)