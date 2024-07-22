import sys

a = int(sys.stdin.readline())
result = {}

for _ in range (a) :
    n, m = map(str,sys.stdin.readline().split())
    if m == "enter" :
        result[n] = True
    elif m == "leave" and n in result :
        del result[n]
    else : pass
    
    
print("\n".join(sorted(result.keys(), reverse=True)))