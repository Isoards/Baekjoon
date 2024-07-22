while True :
    a = int(input())
    arr = []
    sum = 0
    
    if a == -1 :
        break
    
    for i in range(a - 1) :
        if a % (i + 1) == 0 :
            arr.append(i + 1)

    for i in range(len(arr)) :
        sum += arr[i]

    if sum == a :
        print(a, '=', ' + '.join(list(map(str,arr))))
    else :
        print(a, 'is NOT perfect.')