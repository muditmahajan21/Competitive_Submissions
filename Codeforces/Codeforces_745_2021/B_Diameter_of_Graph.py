
test = int(input())
for _ in range(test):
    n, m, k = (map(int, input().split()))
    temp = (n * (n - 1)) // 2
    if(m > temp or m + 1 < n):
        print("NO")
    else:
        ans = 0
        if m == 0:
            ans = 0
        elif m == 1:
            ans = 1
        elif m == temp:
            ans = 1
        else:
            ans = 2

        if ans + 1 < k:
            print("YES")
        else:
            print("NO")

            
            test = int(input())
            for _ in range(test):
                n = int(input())
                arr = list(map(int, input().split()))