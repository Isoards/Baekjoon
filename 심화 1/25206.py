grade_credit = 0
creditsum = 0

for i in range(20) :
    a = list(input().split())
    if a[2] == 'A+' :
        a[2] = 4.5
    elif a[2] == 'A0' :
        a[2] = 4.0
    elif a[2] == 'B+' :
        a[2] = 3.5
    elif a[2] == 'B0' :
        a[2] = 3.0
    elif a[2] == 'C+' :
        a[2] = 2.5
    elif a[2] == 'C0' :
        a[2] = 2.0
    elif a[2] == 'D+' :
        a[2] = 1.5
    elif a[2] == 'D0' :
        a[2] = 1.0
    elif a[2] == 'F' :
        a[2] = 0.0
    elif a[2] == 'P' :
        continue
    else :
        break
    if a[2] != 'P':
        grade_credit += float(a[1]) * float(a[2])
        creditsum += float(a[1])
    else :
        continue
    
print('%.6f' %(grade_credit / creditsum))
