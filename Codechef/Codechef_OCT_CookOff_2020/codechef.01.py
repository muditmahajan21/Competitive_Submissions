
test = int(input())
for _ in range(test):
    n = int(input())
    str = input()

    flag = False 
    
    if n % 2 != 0:
        n += 1

    if str[-1] in str[:-1]:
        flag = True

    if flag == False:
        print("NO")
    else:
        print("YES")
