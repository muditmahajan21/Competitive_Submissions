n = int(input())
arr = list(map(int, input().split()))
m = dict()

for c in arr:
    if c in m:
        m[c] += 1
    else:
        m[c] = 1

ans = 0

for c in m:
    t = m[c]
    ans += (t * (t - 1) // 2)

temp = (n * (n - 1) // 2)
ans = temp - ans

print(ans)