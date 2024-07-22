a = int(input())
b = input()
result = 0

for i in range(a) :
    result += int(str(b)[i])

print(result)