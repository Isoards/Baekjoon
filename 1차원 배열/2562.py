arr = []

for i in range(9) :
    arr += list(map(int, input().split("\n")))

for i in range(9) :
    if arr[i] == max(arr) :
        print(max(arr))
        print(i + 1)
