import sys
sys.setrecursionlimit(10000)

def dfs(x, y) :
    dx = [-1, 1, 0, 0, 1, 1, -1, -1]
    dy = [0, 0, -1, 1, 1, -1, 1, -1]
    visited[x][y] = 1
    
    if graph[x][y] == 1 :
        for i in range(8) :
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < h and 0 <= ny < w :
                if graph[nx][ny] == 1 and  not visited[nx][ny] :
                    dfs(nx, ny)


while True :
    w, h = map(int, input().split())
    if w == 0 and h == 0 :
        break
    graph = [list(map(int, input().split())) for _ in range(h)]
    count = 0
    visited = [[0] * w for _ in range(h)]
    print(graph)
    for i in range(h) :
        for j in range(w) :
            if graph[i][j] == 1 and not visited[i][j] :
                dfs(i, j)
                count += 1
                
    print(count)