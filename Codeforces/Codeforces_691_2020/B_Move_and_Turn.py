n = int(input())
ans = 0 
if n % 2 != 0: 
    ans = (3 * n * (n + 4) + 2 + (n * (n + 4) + 2)) // 8 
else:
    ans = (3 * n * (n + 4) + 2 - (n * (n + 4) + 2)) // 8

print(ans + 1)