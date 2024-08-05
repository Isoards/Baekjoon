import sys
from collections import deque 

a = int(sys.stdin.readline())
arr2 = deque([])
for i in range(a) :
    arr = list(map(str, sys.stdin.readline().split()))
    if arr[0] == "push" :
        arr2.append(int(arr[1]))
    elif arr[0] == "pop" :
        if arr2 :
            print(arr2.popleft())
        else :
            print(-1)
    elif arr[0] == "size" :
        print(len(arr2))
    elif arr[0] == "empty" :
        if arr2 :
            print(0)
        else :
            print(1)
    elif arr[0] == "front" :
        if arr2 :
            print(arr2[0])
        else :
            print(-1)
    elif arr[0] == "back" :
        if arr2 :
            print(arr2[-1])
        else :
            print(-1)