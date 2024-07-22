import sys
arr = []

for i in range(int(sys.stdin.readline())) :
    arr.append(list(map(int, sys.stdin.readline().split())))
    
arr.sort()
for i in range(len(arr)) :
    print(arr[i][0], arr[i][1])
