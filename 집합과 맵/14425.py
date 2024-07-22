import sys

m, n = map(int,sys.stdin.readline().split())
arr = []
arr2 = []
result = 0
for _ in range(m) :
    arr.append(str(sys.stdin.readline()))
    
dic = {arr[i] : i for i in range(len(arr))}

for _ in range(n) :
    arr2 = str(sys.stdin.readline())
    if arr2 in dic :
        result += 1
    else : pass 
    
print(result)
