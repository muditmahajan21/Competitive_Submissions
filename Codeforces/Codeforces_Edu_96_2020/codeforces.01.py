try:
    test = int(input())
    for _ in range(test):
        n = int(input())
        ans = n // 3
        if n == 1 or n == 2 or n == 4:
            print("-1")
        else:
            if n == 5:
                print("0 1 0")
            elif n == 7:
                print("0 0 1") 
            elif n % 3 == 2:
                print(str(ans - 1) + " 1 0")
            elif n % 3 == 1:
                print(str(ans - 2) + " 0 1")
            else:
                print(str(ans) + " 0 0")
except:
    pass