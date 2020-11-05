test = input()
test = int(test)
for _ in range(test):
    b,w = input().split()
    bc,wc,z = input().split()
    b = int(b)
    w = int(w)
    bc = int(bc)
    wc = int(wc)
    z  = int(z)
    cost = 0
    
    
    if(bc < wc and (bc + z) < wc):
        cost = (b + w) * bc + w * z
    elif(wc < bc and (wc + z) < bc):
        cost = (b + w) * wc + b * z
    else :
        cost = b * bc + w * wc 
    
    print(cost)
