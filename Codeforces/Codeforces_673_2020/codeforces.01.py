try:
    test = int(input())
    for _ in range(test):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))
        min_ele = min(arr)
        arr.remove(min_ele)
        for item in arr:
            if item > k:
                arr.remove(item)
        count = 0
        for item in arr:
            item = k - item
            count += item // min_ele
        print(count)
except:
    pass
