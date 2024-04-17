from collections import *
# cook your dish here

def dfs(node, bitmask):
    if node in visited:
        return
    visited.add(node)
    for child in adj[node]:
        if bitmask >> child & 1:
            dfs(child, bitmask)

for _ in range(int(input())):

    n = int(input())

    adj = defaultdict(set)
    for i in range(n):
        row = input()
        for j in range(n):
            if row[j] == '1':
                adj[i].add(j)
    
    res = n
    for i in range(1, 1 << n):

        if i.bit_count() >= res:
            continue

        visited = set()
        dfs(i.bit_length()-1, i)
        if len(visited) < i.bit_count():
            continue

        store = set()
        for j in range(n):
            if i >> j & 1:
                store.add(j)
                store.update(adj[j])

        if len(store) == n:
            res = i.bit_count()
            
    print(res-1)
