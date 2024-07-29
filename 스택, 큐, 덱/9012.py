import sys

a = int(sys.stdin.readline())

for _ in range(a) :
    arr = list(map(str, sys.stdin.readline().strip()))
    count = 0
    for i in range(len(arr)) :
        if arr[i] == "(" :
            count += 1
        elif arr[i] == ")" :
            count -= 1
        if count < 0 :
            break
    if count == 0 :
        print("YES")
    else : print("NO")