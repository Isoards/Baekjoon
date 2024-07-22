import sys
sys.setrecursionlimit(100000)

def dfs(graph, x, visited) :
    global count
    visited[x] = count
    count += 1
    
    for i in graph[x] :
        if not visited[i] :
            dfs(graph, i, visited)
            
N, M, R = map(int, sys.stdin.readline().split())
graph = [[] for _ in range(N + 1)]
visited = [0] * (N + 1)
count = 1

for i in range(M) :
    a, b = map(int, sys.stdin.readline().split())
    graph[a].append(b)
    graph[b].append(a)
    
for i in range(1, N + 1) :
    graph[i].sort(reverse = True)
    
dfs(graph, R, visited)

for i in range(1, N + 1) :
    print(visited[i])