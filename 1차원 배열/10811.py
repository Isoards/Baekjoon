a, b = map(int,input().split())
arr = list(range(a+1))
result =[]
del arr[0]

for i in range(b) :
    c, d = map(int,input().split())
    result = arr[c-1:d]
    result.reverse()
    arr[c-1:d] = result

print(*arr)
