p = input()
q = input()
p = int(p)
q = int(q)
count = 0
for number in range(p,q+1):
    
    square = pow(number,2)
    string = str(square)
    half = (len(string) // 2)
    if (len(string) % 2 != 0):
        half += 1

    if(number == 1):
        print(number, end = " ")
        count += 1

    if(len(string) > 1):
        l = string[:half]
        r = string[half:]
        l1 = '0'
        r1 = '0'
        if (len(string) %2 != 0):
            l1 = string[:half-1]
            r1 = string[half-1:]
        
        l = int(l)
        r = int(r)
        l1 = int(l1)
        r1 = int(r1)

        if(l + r == number or l1 + r1 == number):
            if(number!=10 and number!=100 and number != 1000 and number != 10000 and number != 100000):
                print(number, end = " ")
                count += 1
if(count == 0):
    print("INVALID RANGE")
