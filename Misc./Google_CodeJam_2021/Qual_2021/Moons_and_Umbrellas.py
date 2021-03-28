
test = int(input())
for t in range(test):
    ans = 0
    temp = list(input().split())
    
    x = int(temp[0])
    y = int(temp[1])
    s = str(temp[2])
    l = list(s)
    
    n = len(s)

    if x < 0:
        x *= -1
    if y < 0:
        y *= -1
    
    cnt = 0
    cnt = s.count('?')
    if cnt  == n or cnt == n - 1:
        ans = 0
    else:
        k = 0
        while k < n - 1:
            if s[k] != '?':
                break
            k += 1
        if k == 0:
            k += 1
        
        while k < n - 1:
            if s[k] == '?':
                if s[k - 1] != s[k + 1] and s[k + 1] != '?':
                    if s[k - 1] == 'J':
                        ans += y
                    else:
                        ans += x
                elif s[k - 1] != s[k + 1] and s[k + 1] == '?':
                    j = k + 2
                    while j < n and s[j] == '?':
                        j += 1
                    if j == n:
                        break
                    if s[k - 1] != s[j]:
                        if s[k - 1] == 'J':
                            ans += y
                        else:
                            ans += x
                    k = j
            k += 1
        for i in range(n - 1):
            if s[i] == 'J' and s[i + 1] == 'C':
                ans += y
            elif s[i] == 'C' and s[i + 1] == 'J':
                ans += x

    print("Case #" + (str)(t + 1) + ": " + (str)(ans))
