a = int(input())

for i in range(1, a + 1) :
    num = sum(map(int, str[i]))
    num_sum = num + i
    if num_sum == a :
        print(i)
        break
    if i == a :
        print(0)