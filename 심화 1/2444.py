a = int(input())
case = (2 * a) - 1
star = ""

for i in range(a) :
    star = (" " * (a - i - 1)) + ("*" * (2 * i + 1))
    print(star)

for i in range(a) :
    star = (" " * (i + 1)) + ("*" * ((2 * a - 1) - 2 - (2 * i)))
    print(star)
    