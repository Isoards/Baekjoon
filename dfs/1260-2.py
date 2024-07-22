import sys
from collections import deque
sys.setrecursionlimit(10000)

def dfs(graph, x, visited) :
    visited[x] = 1
    print(x, end = ' ')
    for i in graph[x] :
        if not visited[i] :
            dfs(graph, i, visited)

def bfs(graph, x, visited) :
    q = deque([x])
    visited[x] = 1
    while q :
        v = q.popleft()
        print(v, end = ' ')
        
        for i in graph[v] :
            if not visited[i] :
                q.append(i)
                visited[i] = 1
                
n, m, v = map(int,input().split())
graph = [[] for _ in range(n + 1) ]
visited1 = [0] * (n + 1)
visited2 = [0] * (n + 1)
for i in range(m) :
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    graph[a].sort()
    graph[b].sort()
    
dfs(graph, v, visited1)
print()
bfs(graph, v, visited2)