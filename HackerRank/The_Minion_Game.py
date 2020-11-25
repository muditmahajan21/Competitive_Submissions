def minion_game(string):
    vow = "AEIOU"
    slen = len(string)
    tsub = int(slen * (slen + 1) / 2)
    k = sum(slen - i for i in range(slen) if string[i] in vow)   
    s = tsub - k

    if s > k: print("Stuart " + (str)(s))
    elif s < k: print("Kevin " + (str)(k))
    else: print("Draw")

