from collections import Counter

n = int(input())
shoes = Counter(map(int,input().split()))
x = int(input())
res = []
for i in range(x):
    a,b = map(int,input().split())
    if shoes[a] > 0:
        res.append(b)
        shoes.subtract(Counter([a]))
    else:
        pass

print (sum(res))
