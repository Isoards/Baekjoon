while True :
    a = list(map(int,input().split()))
    if a[0] != a[1] :
        if (a[0] / a[1]) == int(a[0] / a[1]) :
            print('multiple')
        elif (a[1] / a[0]) == int(a[1] / a[0]) :
            print('factor')
        else :
            print('neither')
    else :
        break
        