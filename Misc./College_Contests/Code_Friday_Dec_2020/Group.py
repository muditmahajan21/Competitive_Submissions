"""
import operator as op
from functools import reduce

def ncr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer // denom
"""
def ncr(n, r):
    value = 1 
    for i in range(r):
        value *= (n - i) 
        value //= (i + 1)
    return value 

n, m, k = map(int, input().split()) 
ans = 0

for i in range(4, k):
    ans += ncr(n, i) * ncr(m, k - i)

print(ans)