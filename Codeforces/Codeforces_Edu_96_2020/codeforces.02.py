try:
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        
        litres = list(map(int, input().split()))
        litres.sort(reverse = True)
        maximum, minimum = 0, 0 

        for i in range(k + 1):
            maximum += litres[i] 
            if i != 0:
                litres[i] = 0 
        
        minimum = min(litres)

        ans = maximum - minimum

        print(ans)
        
except:
    pass