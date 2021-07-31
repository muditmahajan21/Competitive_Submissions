test = int(input())
for _ in range(test):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    t = []
    
    ans = 2 * n + 1

    for i in range(n):
        temp = (a[0] + b[i]) % n
        ans = min(ans, temp)
    
    for i in range(n):
        temp = (a[0] + b[i]) % n
        if temp == ans:
            t.append(i)

    if(len(t) == 1):
        j = t[0]
        b = b[j:] + b[:j]
        
        for i in range(n):
            temp = (a[i] + b[i]) % n
            print(temp, end = " ")
        print()

    else:
        j = t[0]
        k = t[1]

       
        c = b[j:] + b[:j]
        d = b[k:] + b[:k]

        j_flag = False
        k_flag = False

        ans_j = []
        ans_k = []

        for i in range(n):
            a1 = (a[i] + c[i]) % n
            a2 = (a[i] + d[i]) % n
            
            ans_j.append(a1)
            ans_k.append(a2)

        for i in range(n):
            if(ans_j[i] < ans_k[i]):
                j_flag = True
                break
            elif ans_k[i] < ans_j[i]:
                k_flag = True
                break
        
        if(j_flag):
            print(*ans_j)
        elif k_flag:
            print(*ans_k)
        else:
            print(*ans_j)