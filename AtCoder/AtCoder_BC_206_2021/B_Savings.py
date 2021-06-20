n = int(input())
l = 0
ans = 0
for i in range(1, 10**9):
    l += i
    if l >= n:
        ans = i
        break
print(ans)