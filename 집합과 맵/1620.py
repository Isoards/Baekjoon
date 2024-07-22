import sys

n, m = map(int, sys.stdin.readline().split())
arr = {}

for i in range(n) :
    arr[i] = sys.stdin.readline().strip()
    
arr2 = {v:k for k,v in arr.items()}

for i in range(m) :
    a = sys.stdin.readline().strip()

    if a.isdigit() :
        print(arr.get(int(a) - 1))
    else :
        print(arr2.get(a) + 1)
    