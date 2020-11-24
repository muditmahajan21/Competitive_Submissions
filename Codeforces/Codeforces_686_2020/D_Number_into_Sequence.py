import math
import sys 

sys.setrecursionlimit(10**6)

def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

test = int(input())
for _ in range(test):
    n = int(input())
    primes = prime_factors(n)

    if(len(primes) == 1):
        print(1)
        print(n)
        continue
    
    count = {}

    for i in range(len(primes)):
        if primes[i] not in count:
            count[primes[i]] = 1 
        else:
            count[primes[i]] += 1 

    max_count = 0
    max_key = 0
    for key, value in count.items():
        max_count = max(max_count, value)
        if max_count == value:
            max_key = key

    temp = 1 

    for i in range(len(primes)):
        if primes[i] != max_key:
            temp *= primes[i] 

    temp *= max_key 

    ans = [max_key] * (max_count - 1)

    ans.append(temp)

    print(len(ans))
    print(*ans)