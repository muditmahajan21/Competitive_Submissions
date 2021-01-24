
test = int(input())
for _ in range(test):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split())) 

    a.sort() 
    b.sort(reverse = True) 

    i, j = 0, 0 
    sum_a, sum_b = 0, 0 
    flag = False 
    count = 0
    
    if(sum(a) > sum(b)):
        print(0) 
        continue

    while i < n and j < m:
        
        a[i], b[j] = b[j], a[i] 
        count += 1
        i += 1 
        j += 1 
        sum_a = sum(a) 
        sum_b = sum(b)
        
        if sum_a > sum_b:
            flag = True 
            break
    
    ans = 0
    
    if flag:
        ans = count        
    else:
        ans = -1 

    print(ans)