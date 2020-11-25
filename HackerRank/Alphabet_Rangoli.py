def print_rangoli(size):
    # your code goes here
    alp = 'abcdefghijklmnopqrstuvwxyz'[0:size]
    
    for i in range(size - 1, -size, -1):
        x = abs(i)
        if x >= 0:
            line = alp[size : x : -1] + alp[x : size]
            print ("--" * x + '-'.join(line)+ "--" *x)

