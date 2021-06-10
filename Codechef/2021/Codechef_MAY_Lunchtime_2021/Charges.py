
test = int(input())
for _ in range(test):
    n, k = map(int, input().split())
    s = input()
    arr = [0] * n

    ans = 0
    for i in range(0, n - 1):
        if s[i] == s[i + 1]:    
            ans += 2
        else:
            ans += 1
        arr[i] = int(s[i])

    arr[-1] = int(s[-1])

    j = list(map(int, input().split()))

    for temp in j:
        
        temp -= 1
        if n >= 2:
            if temp == 0:
                if arr[temp] == arr[temp + 1]:
                    ans -= 1
                else:
                    ans += 1
            elif temp == n - 1:
                if arr[temp] == arr[temp - 1]:
                    ans -= 1
                else:
                    ans += 1
            else:
                if arr[temp] == arr[temp + 1]:
                    ans -= 1
                else:
                    ans += 1
                if arr[temp] == arr[temp - 1]:
                    ans -= 1
                else:
                    ans += 1
            arr[temp] = 1 - arr[temp]
        print(ans)