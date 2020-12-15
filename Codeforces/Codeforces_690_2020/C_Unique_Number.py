test = int(input())
for _ in range(test):
    n = int(input())
    if n > 45:
        print("-1") 
        continue 
    else:
        if n < 10:
            print(n) 
            continue 
        else:
            ans = [] 
            i = 9 
            while i > 0 and n > 0:
                if n >= i: 
                    n -= i
                    ans.append(i) 
                i -= 1
            ans.reverse()
            print(*ans, sep = "")