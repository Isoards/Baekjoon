import sys

a = int(sys.stdin.readline())
arr = (list(map(int, sys.stdin.readline().split())))
arr2 = sorted(arr)
result = [0 for _ in range(a)]
finish = [False for _ in range(a)]
count = 0
arr2_set = sorted(list(set(arr)))
dic = {arr2_set[i] : i for i in range(len(arr2_set))}
print(dic)

print(dic[4])
for i in range(a) :
    all_arr_index = list(filter(lambda x: arr[x] == arr2[i], range(len(arr))))
    arr_index = arr.index(arr2[i])
    if (len(all_arr_index) > 1 and finish[arr_index] == False) :
        for j in all_arr_index :
            result[j] = count
            finish[j] = True
        count += 1
    elif(len(all_arr_index) == 1 and finish[arr_index] == False) :
        result[arr_index] = count
        finish[arr_index] = True
        count += 1
    else : pass

print(result)
import sys

input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

arr2 = sorted(list(set(arr)))
dic = {arr2[i] : i for i in range(len(arr2))}
for i in arr:
    print(dic[i], end = ' ')