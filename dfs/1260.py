import sys
sys.setrecursionlimit(10000)

def dfs(x, n, visited) :
    visited[x] = 1
    nxt = []
    for i in range(n) :
        if root[i][0] == x :
            nxt.append(root[i][1])
        elif root[i][1] == x :
            nxt.append(root[i][0])
    nxt.sort()
    
    for i in range(len(nxt)) :
        if not visited[nxt[i]] :
            dfsarr.append(nxt[i])
            dfs(nxt[i], n, visited)

def bfs(x, n) :
    nxt = []
    for i in range(n) :
        if root[i][0] == x :
            nxt.append(root[i][1])
        elif root[i][1] == x :
            nxt.append(root[i][0])
    nxt.sort()
    
    for i in range(len(nxt)) :
        bfsarr.append(nxt[i])
        
    for i in range(len(nxt)) :
        tmp = []
        for j in range(n) :
            if root[j][0] == nxt[i] :
                tmp.append(root[j][1])
            elif root[j][1] == nxt[i] :
                tmp.append(root[j][0])
        tmp.sort()
        for k in range(len(tmp)) :
            if not tmp[k] in bfsarr :
                bfsarr.append(tmp[i])
                
n, m, v = map(int,input().split())
dfsarr, bfsarr = [v], [v]
visited = [0] * (n + 1)
root = [[0, 0] for _ in range(n + 1) ]

for i in range(m) :
    a, b = map(int, input().split())
    root[i][0] = a
    root[i][1] = b
dfs(v, m, visited)
bfs(v, m)



for i in range(len(dfsarr)) :
    print(dfsarr[i], end = ' ')
print()

for i in range(len(bfsarr)) :
    print(bfsarr[i], end = ' ')
print()