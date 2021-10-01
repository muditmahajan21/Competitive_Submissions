
test = int(input())
for _ in range(test):
    s = input()

    ans = 0
    c = '1'

    for e in s:
        if e != c:
            ans += 1
            c = e
    print(ans)

    