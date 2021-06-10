a, b = map(int, input().split())
if a == b:
    print(a)
else:
    if a == 0 and b == 1:
        print(2)
    elif a == 1 and b == 0:
        print(2) 
    elif a == 0 and b == 2:
        print(1)
    elif a == 2 and b == 0:
        print(1)
    elif a == 1 and b == 2:
        print(0)
    elif a == 2 and b == 1:
        print(0)