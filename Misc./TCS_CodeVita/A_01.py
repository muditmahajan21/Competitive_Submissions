su = input()
cu = input()

s = su.lower()
c = cu.lower()

cl = []
cl.append(c)

l = ' '.join(cl).split()

if(len(set(s)) != len(s)):
    print("New Language Error")
else:
    res = ""
    for lc in l:
        t = ""
        for i in range(len(s)):
            for j in range(len(lc)):
                if s[i] == lc[j]:
                    t += s[i]
        res += t
        res += " "
    print(res)