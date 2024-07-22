import sys
a =  int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
tmparr = arr.copy()
result = [0 for _ in range(a)]
tmparr.sort()
count = 0 
test = [0, 0, 0, 0, 0]
b = [i for i, ele in enumerate(arr) if ele == 4]


for i in range(a) :
    index =  [j for j, ele in enumerate(arr) if ele == tmparr[i]]
    print(index)
    if len(index) > 1 and i == index[0] :
        print(index)
        for j in index :
            result[j] = count
        count += 1
    
    elif len(index) > 1 and i != index[0] :
        pass
    else :
        result[arr.index(tmparr[i])] = count
        count += 1
    
print(result)
    
    
    
#for i in range(a) :
#    
#    if tmparr[i] == min(arr) :
#        result[arr.index(tmparr[i])] = 0
#    else :
#        result[arr.index(tmparr[i])] = count + 1
#        if tmparr[i] in tmparr[:i] :
#            result[i] = result[arr.index(tmparr[i])]
#        elif tmparr[i] not in tmparr[i + 1:] :
#            count += 1
#
#    
#print(result)