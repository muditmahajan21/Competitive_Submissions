
n = int(input())
arr = []
for _ in range(n):
    temp = list(map(int, input().split()))
    arr.append(temp) 

arr.sort(key = lambda t: (2 * t[0] + t[1])) 
arr.reverse() 

temp = 0

for x, y in arr:
    temp += x  

ans = 0
 
for i in range(n):
    x, y = arr[i]
    ans += x * 2 + y 
    if ans > temp:
        print(i + 1) 
        break