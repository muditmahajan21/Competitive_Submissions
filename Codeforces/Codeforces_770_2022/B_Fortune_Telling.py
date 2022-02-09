test = int(input())
for _ in range(test):
    temp = list(map(int, input().split()))
    n = temp[0]
    x = temp[1]
    y = temp[2]
    arr = list(map(int, input().split()))
    
    temp_max = 2 * (n + 1)
    brr = [0] * temp_max
    brr[0] = x

    k = 0
    for i in range(n):
        brr[2 * i + 1] = brr[i] + arr[k]
        brr[2 * i + 2] = brr[i] ^ arr[k]
        k += 1
    
    start = temp_max - 2 ** n
    flag = False
    #print(brr)
    for i in range(start, temp_max):
        if brr[i] == y:
            flag = True
            break
    
    if flag:
        print("Alice")
    else:
        print("Bob")