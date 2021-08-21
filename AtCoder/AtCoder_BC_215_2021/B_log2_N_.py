n = int(input())
t = 0
while 2 ** t < n:
    t += 1
if 2 ** t != n:
    t -= 1
print(t)