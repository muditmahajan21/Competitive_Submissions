s, t = map(int, input().split())
a = t - s
s = list(str(s)) 
a = list(str(a))

if len(a) != len(s):
    print("NO") 
else:
    s.sort()
    a.sort()
    if s == a:
        print("YES")
    else:
        print("NO")