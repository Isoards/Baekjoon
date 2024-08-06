import sys
from collections import deque

a = int(sys.stdin.readline())
arr = deque([])

for i in range(a) :
    arr.append(i + 1)
    
while len(arr) > 1 :
    arr.popleft()
    arr.append(arr.popleft())
    
print(arr[0])