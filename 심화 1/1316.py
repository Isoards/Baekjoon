from sys import stdin

a = int(stdin.readline())
words = []
word = []
check = 0
result = 0

for i in range(a) :
    words.append(stdin.readline())

for i in range(a) :
    word = list(words[i])
    for j in range(len(word) - 1) :
        if word[j] != word[j + 1] and word[j] in word[j + 1 :]:
            check = 1
    if check != 1 :
        result += 1
    else :
        check = 0

print(result)