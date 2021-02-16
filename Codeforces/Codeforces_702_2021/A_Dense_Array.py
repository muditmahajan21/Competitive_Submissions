test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))

    count  = 0

    for i in range(n - 1):
        if (arr[i] * 2 < arr[i + 1]) or (arr[i + 1] * 2 < arr[i]):
            j = min(arr[i], arr[i + 1])
            k = max(arr[i], arr[i + 1])

            while j * 2 < k:
                j *= 2
                count += 1

    print(count)