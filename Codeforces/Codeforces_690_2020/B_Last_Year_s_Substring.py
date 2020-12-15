test = int(input())
for _ in range(test):
    
    n = int(input())
    string = input()
    check = "2020" 

    test0 = string[0:4]
    test1 = string[0:1] + string[-3:]
    test2 = string[0:2] + string[-2:] 
    test3 = string[0:3] + string[-1:]
    test4 = string[-4:]

    if test0 == check:
        print("YES") 
        continue
    if test1 == check:
        print("YES")
        continue 
    elif test2 == check:
        print("YES")
        continue 
    elif test3 == check:
        print("YES")
        continue 
    elif test4 == check:
        print("YES")
        continue
    else:
        print("NO")
