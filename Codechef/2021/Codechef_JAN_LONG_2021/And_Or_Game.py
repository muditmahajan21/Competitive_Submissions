
test = int(input())
for _ in range(test):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    s = set() 
    stck = [] 

    s.add(0) 
    stck.append(0) 

    while stck:
        temp1 = stck[-1] 
        stck.pop()
        for i in range(n):
            temp2 = a[i] 
            if temp1|temp2 not in s:
                s.add(temp1|temp2) 
                stck.append(temp1|temp2) 
        for i in range(m):
            temp2 = b[i] 
            if temp1&temp2 not in s:
                s.add(temp1&temp2) 
                stck.append(temp1&temp2) 

    print(len(s))    