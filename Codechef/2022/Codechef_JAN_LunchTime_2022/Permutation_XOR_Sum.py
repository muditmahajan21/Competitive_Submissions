
test = int(input())
for _ in range(test):
    n = int(input())
    if n == 1:
        print(0)
    else:
        if n % 2:
            print((n * (n + 1)) // 2)
        else:
            print(n * (n + 1))