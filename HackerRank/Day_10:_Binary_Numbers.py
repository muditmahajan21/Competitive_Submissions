#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    count = 0
    my_max = 0
    while(n > 0):
        temp = n % 2
        if temp == 1:
            count += 1
        else:
            count = 0
        my_max = max(my_max, count)
        n = n // 2
    print(my_max)
