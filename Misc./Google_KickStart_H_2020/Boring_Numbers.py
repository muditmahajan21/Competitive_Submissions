def check(s):
    for i in range(len(s)):
        temp_num = (int)(s[i])
        index = i + 1

        if((index % 2 == 0 and temp_num % 2 != 0) or (index % 2 != 0 and temp_num % 2 == 0)):
            return False
    return True
        

test = int(input())
for t in range(test):
    ans = 0
    l, r = input().split()

    l = (int)(l)
    r = (int)(r)

    for num in range(l, r + 1):
        flag = check((str)(num))
        if flag:
            ans += 1

    print("Case #" + (str)(t + 1) + ": " + (str)(ans))