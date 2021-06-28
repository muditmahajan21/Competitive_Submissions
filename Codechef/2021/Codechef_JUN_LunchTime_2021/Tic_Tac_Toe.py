test = int(input())
for _ in range(test):
    n, m, k = map(int, input().split())
    turn = k * k * 2
    alice = [[0] * m] * n
    bob = [[0] * m] * n

    flag = False
    if turn > n * m:
        print("Draw")
        continue
    else:
        for temp in range(1, n * m + 1):
            x, y = map(int, input().split())
            x -= 1
            y -= 1
            print(bob)
            if temp % 2 == 1:
                alice[x][y] = 1
            else:   
                print(x, y)
                bob[x][y] = 1

            if temp >= turn:
                check = [[0] * n] * m

                for i in range(n):
                    check[i][0] = alice[i][0]
                for j in range(m):
                    check[0][j] = alice[0][j]
                for i in range(1, n):
                    for j in range(1,m):
                        if alice[i][j] == 1:
                            check[i][j] = min(check[i - 1][j - 1], check[i - 1][j], check[i][j - 1]) + 1
                        else:
                            check[i][j] = 0
                        if check[i][j] == k:
                            print("Alice")
                            flag = True
                        if flag:
                            break
                    if flag:
                        break
                if flag:
                    break

                check = [[0] * n] * m

                for i in range(n):
                    check[i][0] = bob[i][0]
                for j in range(m):
                    check[0][j] = bob[0][j]
                for i in range(1, n):
                    for j in range(1,m):
                        if bob[i][j] == 1:
                            check[i][j] = min(check[i - 1][j - 1], check[i - 1][j], check[i][j - 1]) + 1
                        else:
                            check[i][j] = 0
                        if check[i][j] == k:
                            print("Bob")
                            flag = True
                        if flag:
                            break
                    if flag:
                        break
                if flag:
                    break
        if flag:
            pass
        else:
            print("Draw")