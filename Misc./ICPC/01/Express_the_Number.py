import math

def highestPowerof2(n):
    p = int(math.log(n, 2))
    if p % 2 == 0:
        p -= 1
    return p

test = int(input())
for _ in range(test):
    n, x = map(int, input().split())
    
    ans = 0
    while n > x:
        temp = highestPowerof2(n)
        if temp < 0:
            break
        n -= 2 ** temp
        ans += 1
    
    if n <= x and n > 0:
        ans += 1
    elif n > x:
        temp = int(math.log(n, 2))
        if temp % 2 == 1:
            ans += 1
        else:
            ans = -1

    print(ans)