test = int(input())
for _ in range(test):
    n = int(input())
    s = input()
    s = list(s)
    flag = False
    while '?' in s:
        for i in range(n):
            if s[i] == 'B':
                flag = True
                if i > 0 and s[i - 1] == '?':
                    s[i - 1] = 'R'
                if i < n - 1 and s[i + 1] == '?':
                    s[i + 1] = 'R'
            elif s[i] == 'R':
                flag = True
                if i > 0 and s[i - 1] == '?':
                    s[i - 1] = 'B'
                if i < n - 1 and s[i + 1] == '?':
                    s[i + 1] = 'B'
        if not flag:
            s[n // 2] = 'B'
    print(*s, sep='')