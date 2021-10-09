def decimalToBinary(n):
    return bin(n).replace("0b", "")

test = int(input())
for _ in range(test):
    n, k = map(int, input().split())
    s = decimalToBinary(k)
    ans = 0
    c = 0
    mod = 10**9 + 7

    for i in range(len(s) - 1, -1, -1):
        if(s[i] == '1'):
            ans += ((n ** c) % mod)
        c += 1

    print(ans % mod)
