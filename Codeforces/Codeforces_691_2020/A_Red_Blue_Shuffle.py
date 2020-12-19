
test = int(input())
for _ in range(test):
    n = int(input())
    red = input()
    blue = input() 

    red_count, blue_count = 0, 0

    for i in range(n):
        if red[i] > blue[i]:
           red_count += 1 
        elif red[i] < blue[i]:
            blue_count += 1 
        else:
            red_count += 1 
            blue_count += 1

    if red_count > blue_count:
        print("RED") 
    elif blue_count > red_count:
        print("BLUE") 
    else:
        print("EQUAL")