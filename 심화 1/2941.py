from sys import stdin

a = list(stdin.readline())
b = []

for i in range(len(a)-1) :
    if a[i] + a[i + 1] == 'lj' or a[i] + a[i + 1] in 'nj' :
        b.append(a[i] + a[i + 1])
    elif a[i] + a[i + 1] == 'c=' or a[i] + a[i + 1] == 's=' or a[i] + a[i + 1] == 'z=':
        if a[i - 1] + a[i] + a[i + 1] == 'dz=' :
            b.append('dz=')
        else :
            b.append(a[i] + a[i + 1])
    elif a[i] + a[i + 1] == 'c-' or a[i] + a[i + 1] == 'd-' :
        b.append(a[i] + a[i + 1])
    elif a[i] == 'j' :
        if a[i - 1] == 'l' or a[i - 1] == 'n' :
            continue
        else :
            b.append(a[i])
    elif a[i] == '=' :
        if a[i - 1] == 'c' or a[i - 1] == 's' :
            continue
        elif a[i - 1] == 'z' :
            if a[i - 2] == 'd' :
                b.remove('d')
            continue
        else :
            b.append(a[i])
    elif a[i] == '-' :
        if a[i - 1] == 'c' or a[i - 1] == 'd' :
            continue
        else : 
            b.append(a[i])
    else :
        b.append(a[i])
result = len(b)

print(result)