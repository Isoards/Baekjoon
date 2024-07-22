a = int(input())
arr = []

def merge_sort(arr) :
    def sort(low, high) :
        if high - low < 2 :
            return
        mid = (high + low) // 2
        sort(low, mid)
        sort(mid, high)
        merge(low, mid, high)
        
    def merge (low, mid, high) :
        merged_arr = []
        l, h = low, mid
        while l < mid and h < high :
            if arr[l] < arr[h] :
                merged_arr.append(arr[l])
                l += 1
            else :
                merged_arr.append(arr[h])
                h += 1
                
        while l < mid :
            merged_arr += arr[l]
            l += 1
        while h < high :
            merged_arr += arr[h]
            
        for i in range(low, high) :
            arr[i] = merged_arr[i - low]
        return sort(0, len(arr))


for i in range(a) :
    arr.append(int(input()))
    
merge_sort(arr)
print(arr)
