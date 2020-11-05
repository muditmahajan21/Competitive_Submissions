a = int(input())
a = set(input().split())
b = int(input())
b = set(input().split())

ans = len(a.intersection(b))

print(ans)
