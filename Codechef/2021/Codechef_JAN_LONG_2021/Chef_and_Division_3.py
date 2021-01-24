for _ in range(int(input())):
    n, k, d = map(int, input().split()) 
    s = sum(list(map(int, input().split()))) 
    if s >= k:
        if s // k > d:
            print(d) 
        else:
            print(s // k) 
    else:
        print(0)