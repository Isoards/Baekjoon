import sys

a = int(input())
arr = []

for i in range(a) :
    arr.append(int(sys.stdin.readline()))
    
arr.sort()

for i in range(a) :
    print(arr[i])