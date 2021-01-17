n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ans = a[0] * b[0]
print(ans)
max_a = a[0]

for i in range(1, n):
    max_a = max(max_a, a[i])
    ans = max(ans, max_a * b[i])
    print(ans)