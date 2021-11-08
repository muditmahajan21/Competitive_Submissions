test = int(input())
for _ in range(test):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    k += 1
    ans = 0

    for i in range(n - 1):
        if(k > 0):
            temp = arr[i + 1] - arr[i]
            pow_10 = 10 ** temp
            pow_10 -= 1
            ans += (10 ** arr[i] * min(pow_10, k))
            k -= min(k, pow_10)
    
    if k > 0:
        ans += ((10 ** arr[-1]) * (k))
    
    print(ans)