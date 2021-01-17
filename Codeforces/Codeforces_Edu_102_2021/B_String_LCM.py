def gcd(a,b):
    if a == 0:
        return b
    return gcd(b % a, a)
 

def lcm(a,b):
    return (a // gcd(a,b))* b

test = int(input())
for _ in range(test):
   
    s1 = input() 
    s2 = input() 

    if len(s2) < len(s1):
        s1, s2 = s2, s1

    t = lcm(len(s1), len(s2)) 
    t = t // len(s1)

    s = s1*t 
    temp = s 

    t1 = s.replace(s1, "") 
    t2 = s.replace(s2, "") 

    if t1 or t2:
        print(-1) 
    else:
        print(temp)