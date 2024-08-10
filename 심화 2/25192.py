import sys

a = int(sys.stdin.readline())
arr = set()
count = 0

for _ in range(a) :
    b = sys.stdin.readline().strip()
    
    if b == "ENTER" :
        arr.clear()
    else :
        if b not in arr :
            arr.add(b)
            count += 1
    
print(count)
