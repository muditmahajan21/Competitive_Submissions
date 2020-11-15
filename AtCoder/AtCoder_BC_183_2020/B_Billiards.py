l = list(map(float, input().split()))

if l[0] > l[2]:
    l[0], l[1], l[2], l[3] = l[2], l[3], l[0], l[1]

ans = (l[0] * l[3] + l[1] * l[2]) / (l[1] + l[3])
print(ans)