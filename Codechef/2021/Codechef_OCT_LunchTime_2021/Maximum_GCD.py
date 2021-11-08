import numpy as np
test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    ans = np.gcd.reduce(arr)

    for i in range(n):
        for j in range(i + 1, n):
            t1 = arr[i]
            t2 = arr[j]
            arr[i] = arr[j] = arr[i] * arr[j]
            ans = max(ans, np.gcd.reduce(arr))
            arr[i] = t1
            arr[j] = t2
    
    print(ans)