from sys import stdin

a = list(stdin.readline().upper())
a.pop()
b = list(set(a))
c = max(set(a), key=a.count)

result = ''

for i in range(len(b)) :
    if a.count(b[i]) == a.count(c) and b[i] != c :
        result = '?'
        
if result != '?' :
    result = c
    print(result)
else :
    print(result)
