a = int(input())
a = set(input().split())
b = int(input())
b = set(input().split())

ans = len(a.symmetric_difference(b))

print(ans)
