import sys
arr = []

for i in range(int(input())) :
    arr.append(input())
    
arr = list(set(arr))
arr.sort()
arr.sort(key=len)

for i in range(len(arr)) :
    print(arr[i])