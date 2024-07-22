a, b = map(int,input().split())
arr = list(range(a+1))
del arr[0]

for i in range(b) :
    c, d = map(int,input().split())
    e = arr[c-1]
    arr[c-1] = arr[d-1]
    arr[d-1] = e

print(*arr)