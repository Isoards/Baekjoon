import sys

n, m = map(int,sys.stdin.readline().split())
arr = {}
result = []

for i in range(n) :
    a = sys.stdin.readline().strip()
    if a not in arr :
        arr[a] = i

for _ in range(m) :
    a = sys.stdin.readline().strip()
    if a in arr :
        result.append(a)
        
result.sort()
print(len(result))
for i in range(len(result)) :
    print(result[i])