#!/bin/python3

import re

x,y = list(map(int,input().split()))
rows =[input() for i in range(x)]
text = "".join([row[i] for i in range(y) for row in rows])
text = re.sub('([A-Za-z1-9])[^A-Za-z1-9]+([A-Za-z1-9])', r'\1 \2', text)
text = re.sub('  ', ' ', text)
print(text)
