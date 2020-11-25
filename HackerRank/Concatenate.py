import numpy as np
n,m,p=map(int,input().split())
lis=[]
for i in range(n+m):
    inp=input().split()
    lis.append(inp)
print(np.array(lis,int))
