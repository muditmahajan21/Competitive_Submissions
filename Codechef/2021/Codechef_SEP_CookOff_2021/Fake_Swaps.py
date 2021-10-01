
test = int(input())
for _ in range(test):
    n = int(input())
    a = input()
    b = input()

    if a == b:
        print("YES")
    else:
        zero = b.count('0')
        one = b.count('1')

        if zero > 0 and one > 0:
            print("YES")
        else:
            print("NO")