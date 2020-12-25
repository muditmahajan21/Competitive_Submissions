
test = int(input())
for _ in range(test):
    p, q, r, s, n = map(int, input().split())
    
    a = max(r, p - n)
    b = max(s, q - (n - (p - a)))
    c = max(s, q - n) 
    d = max(r, p - (n - (q - c)))

    ans = min(a * b, c *  d) 

    print(ans)