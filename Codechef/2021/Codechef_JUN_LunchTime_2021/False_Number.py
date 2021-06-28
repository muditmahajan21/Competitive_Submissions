test = int(input())
for _ in range(test):
    n = input()
    if n[0] == '1':
        n = '1' + '0' + n[1:]
    else:
        n = '1' + n
    print(n)