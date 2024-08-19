import sys

def merge_sort(arr, p, r) :
    if (p < r) :
        q = (p + r) // 2
        merge_sort(arr, p, q) # 전반부 정렬
        merge_sort(arr, q + 1, r) # 후반부 정렬
        merge(arr, p, q, r) # 병합
        
def merge(arr, p, q, r) :
    global cnt, res # cnt, res 전역변수로 선언
    i = p
    j = q + 1
    tmp = []
    
    while (i <= q and j <= r) :
        if (arr[i] <= arr[j]) :
            tmp.append(arr[i])
            i += 1
        else :
            tmp.append(arr[j])
            j += 1
            
    while (i <= q) :
        tmp.append(arr[i])
        i += 1
        
    while (j <= r) :
        tmp.append(arr[j])
        j += 1
        
    i = p
    t = 0
    
    while (i <= r) :
        arr[i] = tmp[t]
        cnt += 1
        if cnt == b :
            res = arr[i]
            break
        i += 1
        t += 1

a, b = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

cnt = 0
res = -1

merge_sort(arr, 0, len(arr) - 1)
print(res)