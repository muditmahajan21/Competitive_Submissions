try:
    test = int(input())
    while test > 0:
        size = int(input())
        x = [int(x) for x in input().split()]
        my_list = list(dict.fromkeys(x))
        if 0 in my_list:
            my_list.remove(0)
        print(len(my_list))
        test -= 1
except:
    pass