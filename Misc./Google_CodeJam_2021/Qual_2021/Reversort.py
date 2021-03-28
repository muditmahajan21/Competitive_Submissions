try:
    test = int(input())
    for t in range(1, test + 1):
        ans = 0
        n = int(input())
        arr = list(map(int, input().split()))
        for i in range(n - 1):
            min_ele = min(arr[i:])
            min_ind = arr.index(min_ele) + 1
            arr[i:min_ind] = reversed(arr[i:min_ind])
            ans += min_ind - i
        print("Case #" + (str)(t) + ":" , ans)
except:
    pass 