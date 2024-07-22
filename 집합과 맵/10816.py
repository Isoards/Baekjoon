import sys

n = int(sys.stdin.readline())

arr = list(map(int,sys.stdin.readline().split()))
dic = {}

for num in arr :
    if num in dic :
        dic[num] += 1
    else :
        dic[num] = 1

m = int(sys.stdin.readline())

arr2 = list(map(int,sys.stdin.readline().split()))

for i in range(m) :
    if arr2[i] in dic :
        print(dic[arr2[i]], end= ' ')
    else : print("0", end= ' ')