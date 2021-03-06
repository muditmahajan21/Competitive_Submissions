def reversDigits(num):
    rev_num = 0
    while num > 0:
        a = num % 10
        rev_num = rev_num * 10 + a
        num = num // 10
    return rev_num

def check(h, m, sh, sm, s):
    c = "347"
    sh = reversDigits(sh)
    sm = reversDigits(sm)
    print(sm, sh)
    if(sh < h and sm < m):
        t = list(set(s) & set(c))
        if len(t) == 0:
            return True
        else:
            return False

test = int(input())
for _ in range(test):
    h, m = map(int, input().split())
    s = input()
    copy_s = s

    s = list(s)
    for i in range(len(s)):
        if s[i] == '2':
            s[i] = '5'
        elif s[i] == '5':
            s[i] = '2'
        elif s[i] == '6':
            s[i] = '9'
        elif s[i] == '9':
            s[i] = '6'

    s = ' '.join(map(str, s))
    sh = int(s[:2])
    sm = int(s[3:])
    
    strh = s[:2]
    strm = s[3:]

    if(check(h, m, sm, sh, s)):
        print(s)
        