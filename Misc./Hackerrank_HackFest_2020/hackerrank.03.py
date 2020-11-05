import math
import os
import random
import re
import sys

def whoIsTheWinner(arr):
    dict = {}
    for i in range(len(arr)):
        if arr[i] in dict:
            dict[arr[i]] += 1
        else:
            dict[arr[i]] = 1

    count, count_ans = 0, 0 

    for key in dict:
        if dict[key] % 2 == 1:
            count_ans += 1 
        if dict[key] > 1:
            count += 1 

    if count_ans % 2 == 0:
        if count == 0:
            return "First"
        else:
            return "Second" 
    
    return "First"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = whoIsTheWinner(arr)

        fptr.write(result + '\n')

    fptr.close()
