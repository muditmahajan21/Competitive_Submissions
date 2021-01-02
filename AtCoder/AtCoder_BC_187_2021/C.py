from collections import defaultdict 
n = int(input()) 
d1 = defaultdict(int) 
d2 = defaultdict(int) 

flag = False
s = [] 

for i in range(n):
    temp = input() 
    s.append(temp) 

for string in s:
    if string[0] == "!":
        d1[string[1:]] += 1
    else:
        d2[string] += 1 

for st in d1.keys():
    if d2[st] > 0:
        print(st)
        flag = True 
        break  

if not(flag):
    print("satisfiable")