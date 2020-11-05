test = int(input())
for _ in range(test):
    n = int(input())
    m = 0
    count = n
    for _ in range(n):
        m = input()
    while n // 2 >= 3:
        count += n // 2
        n = n // 2
    print(count)