import sys

a = int(sys.stdin.readline())
arr = set()
count = 0
arr.add("ChongChong")

for _ in range(a) :
    n, k = map(str, sys.stdin.readline().split())
    
    if n in arr or k in arr :
            arr.add(n)
            arr.add(k)
        
print(len(arr))