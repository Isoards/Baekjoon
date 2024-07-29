import sys

k = int(sys.stdin.readline())
arr = []
result = 0

for _ in range(k) :
    a = int(sys.stdin.readline())
    if a == 0 :
        arr.pop(len(arr)-1)
    else :
        arr.append(a)
        
for i in range(len(arr)) :
    result += arr[i]
    
print(result)