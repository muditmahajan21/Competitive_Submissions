import re 

for _ in range(int(input())):
    res = True 
    try:
        my_reg = re.compile(input())
    except re.error:
        res = False 
    print(res)
