n,m = input().split()
n = int(n)
m = int(m)
arr = [0] * n
count = 0
temp = 0
for _ in range(m):
    a, b, k = map(int, input().split())
    arr[a-1] = arr[a-1] + k
    if b < n: 
        arr[b] = arr[b] - k
for i in arr:
    count = count + i
    if count > temp:
         temp = count
print(temp)
