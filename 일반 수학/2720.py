coin = []
def change(base) :
    if base < 500 :
        print((int(base // 25)), end=' ')
        if (base % 25) < 25 :
            print((int((base % 25) // 10)), end=' ')
            if ((base % 25) % 10) < 10 :
                print((int((base % 25) % 10 // 5)), end=' ')
                if ((base % 25) % 10 % 5) < 5 :
                    print((int((base % 25) % 10 % 5 // 1)))
    return coin



for i in range(int(input())) :
    money = int(input())
    change(money)
