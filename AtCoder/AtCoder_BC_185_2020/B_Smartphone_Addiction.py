import sys
n, m, t = map(int, input().split())
temp = n
current = 0  
a, b = [], []
for _ in range(m):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)

for i in range(m):
    temp -= a[i] - current 
    if temp <= 0:
        print("No") 
        sys.exit() 

    temp = min(temp + (b[i] - a[i]), n) 
    current = b[i]

temp -= (t - current) 

if temp > 0:
    print("Yes") 
else:
    print("No")