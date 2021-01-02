n = int(input())

x, y = [], []

for _ in range(n):
    a, b = map(int, input().split()) 
    x.append(a) 
    y.append(b) 

count = 0 

for i in range(n):
    for j in range(i + 1, n):
        temp = (y[i] - y[j])/(x[i] - x[j])
        if temp >= -1 and temp <= 1:
            count += 1 

print(count)