import sys 
sys.setrecursionlimit(1000000)

def dfs(graph, x, visited) :
    global count
    visited[x] = count
    for i in graph[x]:
        if visited[i] == 0 :
            count += 1
            dfs(graph, i, visited)
            
n, m, r = map(int, sys.stdin.readline().split())
count = 1
visited = [0] * (n + 1)
graph = [[] for _ in range(n + 1)]

for i in range(m) :
    a, b = map(int, sys.stdin.readline().split())
    graph[a].append(b)
    graph[b].append(a)
    graph[a].sort()
    graph[b].sort()

dfs(graph, r, visited)

for i in range(1, n + 1):
    print(visited[i])