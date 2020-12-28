
test = int(input())
for _ in range(test):
    n = int(input())
    a = list(map(int, input().split()))
    m = int(input())
    b = list(map(int, input().split()))

    sum_a, max_sum_a, sum_b, max_sum_b = 0, 0, 0, 0

    for i in range(n):
        sum_a += a[i] 
        max_sum_a = max(max_sum_a, sum_a)
            
    
    for i in range(m):
        sum_b += b[i] 
        max_sum_b = max(max_sum_b, sum_b)
        
    ans = max_sum_a + max_sum_b 

    ans = max(ans, max_sum_a) 
    ans = max(ans, max_sum_b) 

    if ans < 0:
        ans = 0

    print(ans)