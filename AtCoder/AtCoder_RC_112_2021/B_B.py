def fun(a, b, c, d):
        i = b - a + 1
        j = d - c + 1
        if b < c or d < a:
            return i + j
        if i < j:
            a, c = c, a
            b, d = d, b
            i, j = j, i

        if c < a:
            return b - c + 1
        elif b < d:
            return d - a + 1
        else:
            return b - a + 1
            

b, c = map(int, input().split())

k = c // 2

if c == 1:
        if b == 0:
            print(1)
            exit()
        else:
            print(2)
            exit()

if c % 2:
    print(fun(b - k, b + k - 1, -b - k, -b + k))
else: 
    print(fun(b - k, b + k - 1, -b - k + 1, -b + k - 1))