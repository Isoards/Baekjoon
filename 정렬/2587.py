arr = []

for i in range(5) :
    arr.append(int(input()))
    
arr.sort()
sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4]

print(sum // 5)
print(arr[2])