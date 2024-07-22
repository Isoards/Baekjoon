import sys

n, m = map(int, sys.stdin.readline().split())
result = 0

arr = set(list(map(int, sys.stdin.readline().split())))
arr2 = set(list(map(int, sys.stdin.readline().split())))

tmp = arr.copy()
tmp2 = arr2.copy()

for i in arr :
    if i in arr2 : 
        tmp2.remove(i)
        
for i in arr2 :
    if i in arr : 
        tmp.remove(i)
        
print(len(tmp) + len(tmp2))