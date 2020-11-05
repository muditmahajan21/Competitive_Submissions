try:
    test = int(input())
    for _ in range(test):
        n, t = input().split()
        n = int(n)
        t = int(t)
        arr = list(map(int, input().split()))
        res = [0] * n
        new_arr = arr.copy()
        for item in arr:
            if item in new_arr:
                new_arr.remove(item)
                temp =  t - item 
                if temp in new_arr:
                    new_arr.remove(temp)
                    my_index = arr.index(temp)
                    res[my_index] = 1
        for ele in res:
            print(str(ele) + " ", end = "")
        print("")
except:
    pass