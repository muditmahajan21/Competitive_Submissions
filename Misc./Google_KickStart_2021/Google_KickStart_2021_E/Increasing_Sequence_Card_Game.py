import math
test = int(input())
for t in range(test):
    ans = 1.0
    n = int(input())
    
    if n > 10 ** 6:
        ans = math.log(n) + 0.5772156649
    else:
        for i in range(2, n + 1):
            ans += 1 / i
    print("Case #" + (str)(t + 1) + ": " + (str)(ans))
