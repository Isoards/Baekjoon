arr = list(map(int,input().split()))
arr.sort()

if  (1 <= arr[0] <= 6) and (1 <= arr[1] <= 6) and (1 <= arr[2] <= 6) :
    if (arr[0] == arr[1] == arr[2] ) :
        print(10000 + (arr[0] * 1000))
    elif (arr[0] == arr[1] or arr[1] == arr[2] or arr[2] == arr[0]) :
        print(1000 + (arr[1] * 100))
    elif (arr[0] != arr[1] != arr[2]) :
        print(arr[2] * 100) 