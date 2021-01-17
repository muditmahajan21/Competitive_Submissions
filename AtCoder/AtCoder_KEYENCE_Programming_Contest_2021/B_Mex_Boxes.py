n, k = map(int, input().split())
arr = list(map(int, input().split())) 
count_0 = arr.count(0) 

ans = 0
arr.sort()
dic = {} 

for i in range(n):
    if arr[i] in dic:
        dic[arr[i]] += 1 
    else:
        dic[arr[i]] = 1 

i = 0 

while i in dic:
    k = min(dic[i], k) 
    ans += k 
    i += 1 
print(ans)