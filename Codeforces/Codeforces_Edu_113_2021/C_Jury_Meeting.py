import math
mod = 998244353
test = int(input())
l = [1] * (200000 + 1)

for i in range(1, 200000 + 1):
    l[i] = l[i - 1] * i

for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()

    ans = 0
    if arr[-1] - arr[-2] > 1:
        ans = 0
    elif arr[-1] == arr[-2]:
        ans = l[n]
    else:
        c = 0
        ans = math.factorial(n)
        c = arr.count(arr[-2])
        c = n - c - 1

        for i in range(c + 1):
            ans -= (math.factorial(n - i - 1) * math.comb(c, i) * math.factorial(i))
    print(ans % mod)