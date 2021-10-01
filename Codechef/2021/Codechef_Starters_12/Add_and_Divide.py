test = int(input())
for _ in range(test):
    a, b = map(int, input().split())

    b = b % a

    flag = False

    for i in range(1, 61):
        t = b ** i
        if t % a == 0:
            flag = True
            break

    if flag:
        print("YES")
    else:
        print("NO")