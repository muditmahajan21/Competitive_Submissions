test = int(input())
for _ in range(test):
    n = int(input())
    s = input()

    if "ab" in s or "ba" in s:
        for i in range(0, n - 1):
            if s[i] == 'a' and s[i + 1] == 'b' or s[i] == 'b' and s[i + 1] == 'a':
                print(i + 1, i + 2)
                break
    else:
        print("-1 -1")