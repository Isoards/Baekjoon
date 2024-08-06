import sys
from collections import deque

a = int(sys.stdin.readline())
arr = deque([])

for i in range(a) :
    n = list(map(int, sys.stdin.readline().split()))
    if n[0] == 1 :
        arr.appendleft(n[1])
    elif n[0] == 2 :
        arr.append(n[1])
    elif n[0] == 3 :
        print(arr.popleft() if len(arr) != 0 else -1)
    elif n[0] == 4 :
        print(arr.pop() if len(arr) != 0 else -1)
    elif n[0] == 5 :
        print(len(arr))
    elif n[0] == 6 :
        print(1 if len(arr) == 0 else 0)
    elif n[0] == 7 :
        print(arr[0] if len(arr) != 0 else -1)
    elif n[0] == 8 :
        print(arr[-1] if len(arr) != 0 else -1)
        
