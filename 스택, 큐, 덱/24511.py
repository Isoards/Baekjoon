import sys
from collections import deque

a = int(sys.stdin.readline())

arr = deque([i for i in range(1, a + 1)])
result = []

qs = list(map(int, sys.stdin.readline().split()))
ele = list(map(int, sys.stdin.readline().split()))

b = int(sys.stdin.readline())
arr = deque(map(int, sys.stdin.readline().split()))


for i in range(a) :
    if qs[i] == 0 :
        result.append(arr.pop())
    else :
        result.append(arr.popleft())
    
print(result)