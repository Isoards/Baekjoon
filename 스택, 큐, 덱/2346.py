import sys
from collections import deque

a = int(sys.stdin.readline())

arr = deque([i for i in range(1, a + 1)])

n = list(map(int, sys.stdin.readline().split()))
result = []

result.append(arr.popleft())
index = n[0]

while len(arr) > 1 :
    for i in n :
        if arr :
            if index > 0 :
                for j in range(index - 1) :
                    arr.append(arr.popleft())
            else :
                for j in range(abs(index)) :
                    arr.appendleft(arr.pop())
                    
            result.append(arr.popleft())
            index = n[result[-1] - 1]
            
    for i in result :
        print(i, end=" ")