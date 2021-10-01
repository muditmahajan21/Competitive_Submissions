
test = int(input())
for _ in range(test):
    n = int(input())
    s = input()

    ans = 0
    for i in range(n - 1):
        t = int(s[i])
        if t > 0:
            ans += (1 + t)
    
    t = int(s[-1])
    ans += t

    print(ans)