test = int(input())
for _ in range(test):
    ans = 0
    n, k = input().split()

    n = (int)(n)
    k = (int)(k)

    arr = list(map(int, input().split()))

    index = (n + 1) // 2 

    if index == 1:
        ans = arr[0]
        for i in range(n, n * k, n):
            ans += arr[i]
    else:
        i, j, p = 0, 0, n * k - 1
        index = index - 1

        while i != k:
            a = [0] * n

            for temp in range(index):
                a[temp] = arr[j] 
                j += 1

            for temp in range(n - 1, index - 1, -1):
                a[temp] = arr[p]
                p -= 1

            i += 1

            ans += a[index]

    print(ans)