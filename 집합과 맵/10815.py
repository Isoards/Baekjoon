import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

m = int(sys.stdin.readline())
arr2 = list(map(int, sys.stdin.readline().split()))

dic = {arr[i] : i for i in range(len(arr))}

for i in range(m) :
    if arr2[i] in dic :
        print("1", end=' ')
    else :
        print("0", end=' ')