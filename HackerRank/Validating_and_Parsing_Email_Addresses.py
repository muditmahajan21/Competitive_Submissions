import re
for _ in range(int(input())):
    args = list(input().strip().split(" "))
    r = re.match(r"^<[^-._]+[\w.-]+@[a-zA-Z]+\.[a-zA-Z]{0,3}>$",args[1])
    if r:
        print(" ".join(args))
