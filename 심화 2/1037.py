import sys

a = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
arr.sort()

result = arr[0] * arr[-1]
    
print(result)