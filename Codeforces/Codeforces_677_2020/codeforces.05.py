try:
    def fact(num):
        return 1 if (num == 0 or num == 1) else num * fact(num - 1)

    n = int(input())
    
    ans = (fact(n - 1)) // (n // 2)

    print(ans)
except:
    pass