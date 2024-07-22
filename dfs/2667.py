import sys
sys.setrecursionlimit(10000)
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def dfs (x, y) :
    global count
    visited[x][y] = 1
    count += 1
    
    if map[x][y] == 1 :
        for i in range(4) :
            nx = x + dx[i]
            ny = y + dy[i]
        
            if 0 <= nx < N and 0 <= ny < N :
                if map[nx][ny] == 1 and not visited[nx][ny] :
                    dfs (nx, ny)
                
    return count

N = int(sys.stdin.readline())
map = [[] for _ in range(N)]
visited = [[0] * N for _ in range(N)]
count = 0
result = []
for i in range(N) :
    row = sys.stdin.readline().rstrip()
    for j in range(len(row)) :
        map[i].append(int(row[j]))
        
for i in range(N) :
    for j in range(N) :
        if map[i][j] == 1 and not visited[i][j] : 
            result.append(dfs(i, j))
            count = 0
result.sort()

print(len(result))
for i in range(len(result)) :
    print(result[i])
