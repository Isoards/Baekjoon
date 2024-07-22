a = int(input())
start, p, q = [], [], []
result = 0

for i in range(a) :
    start.append(list(map(int, input().split())))

start.sort()

for i in range(a) :
    p.append(start[i][0] + 10)
    q.append(start[i][1] + 10)
    
print(p,q)
for i in range(a - 1) :
    if p[i] - start[i + 1][0] > 0 :
            if q[i + 1] - start[i][1] > 0 :
                result += abs((p[i] - start[i + 1][0]) * (q[i + 1] - start[i][1]))
                
if start[a - 1][0] - p[0] > 0 :
    if abs(q[a - 1] - start[0][1]) > 0 :
        result += abs((p[a - 1] - start[0][0]) * (q[0] - start[a - 1][1]))

print((a * 100) - result)