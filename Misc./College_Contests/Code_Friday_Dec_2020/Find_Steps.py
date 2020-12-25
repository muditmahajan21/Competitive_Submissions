
test = int(input())
for _ in range(test):
    n = int(input())
    count2, count3 = 0, 0 
    while n % 2 == 0:
        n //= 2 
        count2 += 1

    while n % 3 == 0:
        n //= 3 
        count3 += 1 

    if n == 1 and count2 <= count3:
        ans = 2 * count3 - count2
    else:
        ans = -1

    print(ans)