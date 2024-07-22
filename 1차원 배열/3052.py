arr = []

for i in range(10) :
    a = int(input())
    arr.append(a % 42)

result = list(set(arr))
print(len(result))