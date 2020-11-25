def print_formatted(number):
    
    num = len(bin(number)) - 1
    for i in range(1, number + 1):
        print("{0:{m}d}{0:{n}o}{0:{n}X}{0:{n}b}".format(i,m=num-1,n=num))


