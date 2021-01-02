def s(n):
    res = 0 
    while n > 0:
        t = n % 10 
        res += t 
        n //= 10 
    return res 
a, b = map(int, input().split()) 
print(max(s(a), s(b)))