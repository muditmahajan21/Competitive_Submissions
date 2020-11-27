test = int(input())
for _ in range(test):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    if a == b:
        print("YES")
        continue
    
    flag = True

    neg_index, pos_index = 0, 0

    for i in range(n):
        if a[i] < b[i] and pos_index == 0:
            flag = False
            print("NO")
            break 
        if a[i] > b[i] and neg_index == 0:
            flag = False
            print("NO")
            break 

        if a[i] == 1:
            pos_index = 1
        if a[i] == -1:
            neg_index = 1
    
    if flag:
        print("YES")
