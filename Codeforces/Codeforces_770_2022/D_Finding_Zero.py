from sys import stdout

test = int(input())
for _ in range(test):
    n = int(input())
    c = 0
    pos = 3
    mx = 0

    for i in range(3, n + 1):
        print("? 1 2", i)
        stdout.flush()
        temp = int(input())
        if temp > mx:
            pos = i
            temp = mx
            c = 1
        elif temp == mx:
            c += 1
    
    if(c == n - 2):
        print("! 1 2")
        stdout.flush()
    else:
        temp_pos = pos
        temp_mx = 0
        c = 1
        for i in range(2, n + 1):
            if i != temp_pos:
                print("? 1", temp_pos, i)
                stdout.flush()
                temp_mx = int(input())
                if temp_mx > mx:
                    temp_mx = mx
                    pos = i
                    c = 1
                elif temp_mx == mx:
                    c += 1
        if(c == n - 2):
            print("! 1", temp_pos)
            stdout.flush()
        else:
            print("!", temp_pos, pos)
            stdout.flush()

#1 2 3 4 5 0 4 5