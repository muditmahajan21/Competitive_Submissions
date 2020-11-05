try:
    test = int(input())
    for _ in range(test):
        n, k, l = [int(x) for x in input().split()]
        if k * l < n:
            print("-1")
            continue
        if n > 1 and k == 1:
            print("-1")
            continue
        else:
            count = 0
            i = 1
            while i <= k + 1:
                print(i, end = " ")
                count += 1
                i += 1
                if i == k + 1:
                    i = 1
                if count == n:
                    print("")
                    break
except:
    pass