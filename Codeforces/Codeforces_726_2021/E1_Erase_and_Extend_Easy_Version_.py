n, k = map(int, input().split())
s = input()

ans = ""
if(k <= n):
    ans = s[:k]
else:
    temp = k // n
    for i in range(temp):
        ans += s
    temp = k % n
    ans += s[:temp]

sub = ""
for i in range(1, n + 1):
    sub = s[:i]
    t = len(sub)

    st = ""
    if t >= k:
        st = s[:t]
    else:
        temp = k // t
        for j in range(temp):
            st += sub
        temp = k % t
        st += sub[:temp]
    ans = min(ans, st)

print(ans)