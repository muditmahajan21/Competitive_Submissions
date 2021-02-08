n, m = map(int, input().split())
s = []
for _ in range(n):
    temp = input()
    s.append(temp)

ans = 0 

for i in range(n - 1):
    for j in range(m - 1):
        black = 0 
        if s[i][j] == '#':
            black += 1
        if s[i][j + 1] == '#':
            black += 1
        if s[i + 1][j] == '#':
            black += 1
        if s[i + 1][j + 1] == '#':
            black += 1
        if black == 1 or black == 3:
            ans += 1

print(ans)