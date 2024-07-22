a, b = map(int,input().split())
arr = [0 for i in range(a)]

for i in range(b) :
    c, d, e = map(int,input().split())
    arr[(c-1):d] = [e] * (d - c + 1)

for i in arr :
    print(i, end=" ")