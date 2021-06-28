test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    ending_1, ending_0 = [], []
    for i in range(n):
        s = str(bin(arr[i]).replace("0b", ""))
        if(s[-1] == '1'):
            ending_1.append(arr[i])
        else:
            ending_0.append(arr[i])
    print(*ending_0, end = " ")
    print(*ending_1)