import sys

while(True):
    arr = list(map(str, sys.stdin.readline().rstrip()))
    if arr[0] == "." and len(arr) == 1 :
        break
    result = []
    for i in arr :
        if i == "(" :
            result.append(i)
        elif i == ")" :
            if result and result[len(result)-1] == "(" :
                result.pop()
            else : 
                result.append(i)
                break
        elif i == "[" :
            result.append(i)
        elif i == "]" :
            if result and result[len(result)-1] == "[" :
                result.pop()
            else : 
                result.append(i)
                break
    
    if len(result) == 0 :
        print("yes")
    else : print("no")