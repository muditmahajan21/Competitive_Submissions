n = int(input())
count = 0
check = "7" 
for i in range(1, n + 1):
    string1 = (str)(i)
    string2 = oct(i)[2:] 

    if check in string1 or check in string2:
        count += 1 

ans = n - count 

print(ans)