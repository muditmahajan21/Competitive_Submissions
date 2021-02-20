def f(n):
    g1 = int("".join(sorted(str(n),reverse = True )))
    g2 = int("".join(sorted(str(n))))
    return g1 - g2
    
n, k = map(int, input().split())
for i in range(k):
    n = f(n)
print(n)