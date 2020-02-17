#!/bin/python3

import sys
from operator import mul
import sys
from functools import reduce

t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    num = input().strip()
    lis = [int(x) for x in str(num)] 
    results = []
    for i in range(0,len(lis)-k):
        results.append(reduce(mul,lis[i:i+k]))
    print(max(results))
