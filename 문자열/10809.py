from string import ascii_lowercase

a = input()
b = list(ascii_lowercase)
c = len(b)

for i in range(c):
    if b[i] in a :
        print(a.index(b[i]), end = " ")
    else :
        print(-1, end = " ")