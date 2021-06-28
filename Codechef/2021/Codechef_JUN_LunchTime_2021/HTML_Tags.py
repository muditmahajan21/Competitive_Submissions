test = int(input())
for _ in range(test):
    s = input()
    n = len(s) 
    
    if n < 4:
        print("Error")
        continue
    if s[0] != '<':
        print("Error")
        continue
    if s[1] != '/':
        print("Error")
        continue 
    if s[-1] != '>':
        print("Error")
        continue
    
    s = s[2:-1]
    ans = 0
    for i in s:
        if i.islower() or i.isdigit():
            continue
        else:
            ans = 1
            break
    if(ans):
        print("Error")
    else:
        print("Success")