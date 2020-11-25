from itertools import product

n = list(map(int, input().split()))
m = list(map(int, input().split()))

print(*product(n, m))
