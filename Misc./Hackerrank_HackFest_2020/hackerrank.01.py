import math
import os
import random
import re
import sys

def maximumPower(s):
    count = 0
    bool1, bool2 = True, True 

    i, j = 0, (len(s) - 1)    

    while i <= j:
        if s[i] == '1':
            bool1 = False 

        if bool1:
            i += 1
            count += 1 

        if s[j] == '1' or (len(s) % 2 == 1 and i == (len(s) - 1) / 2):
            bool2 = False 

        if bool2:
            j -= 1
            count += 1

        if bool1 == False and bool2 == False:
            break

    ans, ans_count = 0, 0 

    for i in range(len(s)):
        if s[i] == '1':
            if ans_count > ans:
                ans = ans_count
            ans_count = 0
        else:
            ans_count += 1 

    if ans_count > ans:
        ans = ans_count

    if (max(count, ans) == (len(s) or max(count, ans) == 0)):
        return 0 

    return max(count, ans)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = maximumPower(s)

    fptr.write(str(result) + '\n')

    fptr.close()
