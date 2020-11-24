test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))

    count = {}

    for i in range(len(arr)):
        if arr[i] not in count:
            count[arr[i]] = 1 
        else:
            count[arr[i]] += 1 

    res = [] 

    for key, value in count.items():
        if value == 1:
            res.append(key)

    if(len(res) == 0):
        print(-1)
        continue
    temp = min(res)

    ans = arr.index(temp)

    print(ans + 1)