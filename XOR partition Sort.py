from collections import *
from itertools import *

# cook your dish here
for _ in range(int(input())):
    
    #Inputs
    n, q = map(int, input().split())
    arr = list(map(int, input().split()))
    
    #Sliding window
    bLift = []
    sw = deque()
    banned = defaultdict(int)
    forced = defaultdict(int)
    tie = [0]
    
    #Find the longest XOR-sortable subarray from each index
    for idx, (i, j) in enumerate(pairwise(arr)):
        k = (i ^ j).bit_length()
        if i < j:
            while forced[k]:
                bLift.append([idx + 1])
                d, val = sw.popleft()
                d[val] -= 1
            banned[k] += 1
            sw.append((banned, k))
        elif i > j:
            while banned[k]:
                bLift.append([idx + 1])
                d, val = sw.popleft()
                d[val] -= 1
            forced[k] += 1
            sw.append((forced, k))
        else:
            sw.append((tie, 0))
            
    #Complete binary lifting
    while len(bLift) <= n:
        bLift.append([n])
    while bLift[0][-1] != n:
        for i in range(n):
            bLift[i].append(bLift[bLift[i][-1]][-1])
    bLift.pop()

    #Run queries
    m = len(bLift[0]) - 1
    for _ in range(q):
        
        left, right = map(int, input().split())
        
        res = 0
        i, j = left-1, m
        while i < right:
            #Find minimum step
            while j and bLift[i][j] >= right:
                j -= 1
            res += 1 << j
            i = bLift[i][j]
        print(res)






