a, b = map(int, input().split()) 
if a < b:
    a += 3
    if a > b:
        print("Yes")  
    else:
        print("No")
else:
    b += 3 
    if b > a:
        print("Yes") 
    else:
        print("No")

