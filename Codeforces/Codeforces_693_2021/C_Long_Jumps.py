
test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))

    ans = 0

    for i in range(n - 1, -1, -1):
        temp = i + arr[i] 
        if temp < n:
            arr[i] += arr[temp] 
        ans = max(arr[i], ans) 

    print(ans)