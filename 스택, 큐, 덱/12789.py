import sys

a = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

result = []
count = 1

for i in arr :
    result.append(i)
    while result and result[-1] == count :
        result.pop()
        count += 1
        
if result :
    print("Sad")
else :
    print("Nice")
