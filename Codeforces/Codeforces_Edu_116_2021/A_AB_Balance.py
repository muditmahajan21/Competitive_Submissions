test = int(input())
for _ in range(test):
    s = input()
    ab = 0
    ba = 0
    ab = s.count("ab")
    ba = s.count("ba")
    l = list(s)
    if ab == ba:
        print(s)
    else:
        for i in range(len(s)):
            
            if(l[i] == 'a'):
                l[i] = 'b'
                t = ''.join([str(elem) for elem in l])
                ab = t.count("ab")
                ba = t.count("ba")
                if ab == ba:
                    print(t)
                    break
                l[i] = 'a'
            else:
                l[i] = 'a'
                t = ''.join([str(elem) for elem in l])
                ab = t.count("ab")
                ba = t.count("ba")
                if ab == ba:
                    print(t)
                    break
                l[i] = 'b'
    