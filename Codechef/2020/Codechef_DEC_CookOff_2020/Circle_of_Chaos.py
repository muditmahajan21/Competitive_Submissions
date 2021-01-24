
def find_gcd(x, y): 
    while(y): 
        x, y = y, x % y 

    return x

def gcd_arr(l):
    num1=l[0] 
    num2=l[1] 
    gcd=find_gcd(num1,num2) 

    for i in range(2,len(l)): 
        gcd=find_gcd(gcd,l[i])
    return(gcd)

def factors(n):
    if n==0:
        return 1
    x=[]
    for i in range(1,int(n**(1/2))+1):
        if n%i==0:
            x.append(i)
            x.append(n//i)
    return x

test = int(input())
for _ in range(test):
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    gcd_of_array = 0 

    if m > 1:
        gcd_of_array = gcd_arr(arr)
    else:
        gcd_of_array = arr[0]
    
    ans = 0
    
    factors_of_gcd = factors(gcd_of_array) 
    
    factors_of_gcd.sort(reverse = True) 

    for i in range(len(factors_of_gcd)):
        if factors_of_gcd[i] <= n:
            ans = n - factors_of_gcd[i] 
            break 
    
    print(ans) 
