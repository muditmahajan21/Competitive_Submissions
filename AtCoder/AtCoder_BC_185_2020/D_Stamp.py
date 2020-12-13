
import sys
n, m = map(int, input().split())
if m == 0:
    print(1) 
    sys.exit()
arr = list(map(int, input().split())) 



arr.append(0) 
arr.append(n + 1) 

arr.sort() 

min_gap = 10 ** 20 

gaps = [] 

for i in range(1, len(arr)):
    gap = arr[i] - arr[i - 1] - 1  
    gaps.append(gap) 
    if gap != 0:
        min_gap = min(min_gap, gap) 

ans = 0 

for i in range(len(gaps)):
    ans += -(-gaps[i] // min_gap) 

print(ans)
