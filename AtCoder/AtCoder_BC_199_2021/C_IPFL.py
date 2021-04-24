n = int(input())
s = input()
s = list(s)
q = int(input())

swap_flag = False

for _ in range(q):
    t, a, b = map(int, input().split())
    a -= 1
    b -= 1
    if(swap_flag):
        a = (a + n) % (2 * n) 
        b = (b + n) % (2 * n) 

    if t == 1:
        s[a], s[b] = s[b], s[a]
    else:
        swap_flag = not(swap_flag)

if swap_flag:
    s = s[n:] + s[:n]
print(*s, sep = "")