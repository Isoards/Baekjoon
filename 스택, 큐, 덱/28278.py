import sys

n = int(sys.stdin.readline())
arr = []

for i in range(n) :
    b = list(map(int, sys.stdin.readline().split()))
    if b[0] == 1 : arr.append(b[1])
    elif b[0] == 2 :
        if len(arr) > 0 :
            print(arr[len(arr)-1])
            arr.pop(len(arr)-1)
        else : print(-1) 
    elif b[0] == 3 : print(len(arr))
    elif b[0] == 4 :
        if len(arr) > 0 : print(0)
        else : print(1)
    elif b[0] == 5 :
        if len(arr) :
            print(arr[len(arr)-1])
        else : print(-1) 