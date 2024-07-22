import sys
sys.setrecursionlimit(10000)

def dfs(graph, x, visited) :
    visited[x] = 1
    arr.append(x)
    for i in graph[x] :
        if not visited[i] :
            dfs(graph, i, visited)
            
n = int(input())
m = int(input())
graph = [[] for _ in range(n + 1) ]
visited = [0] * (n + 1)
arr = []
for i in range(m) :
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    graph[a].sort()
    graph[b].sort()
    
dfs(graph, 1, visited)
print(len(arr) - 1)