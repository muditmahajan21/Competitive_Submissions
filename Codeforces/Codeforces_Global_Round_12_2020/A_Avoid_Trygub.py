
test = int(input())
for _ in range(test):
    n = int(input())
    string = input()

    string = sorted(string)

    print(*string, sep = "")