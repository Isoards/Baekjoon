case = int(input())
coin = []
test = []
def change(base, i) :
    Quarter, Dime, Nickel, Penny = 0, 0, 0, 0
    Penny = 0
    if base < 500 :
        coin.append((int(base / 25)))
        Quarter = (int(base / 25))
        if (base % 25) < 25 :
            coin.append((int((base % 25) / 10)))
            Dime = (int((base % 25) / 10))
            if ((base % 25) % 10) < 10 :
                coin.append((int((base % 25) % 10 / 5)))
                Nickel = (int((base % 25) % 10 / 5))
                if ((base % 25) % 10 % 5) < 5 :
                    coin.append((int((base % 25) % 10 % 5)))
                    Penny = (int((base % 25) % 10 % 5))
                    
    test.append([Quarter,Dime,Nickel,Penny])
    return coin, test



for i in range(case) :
    money = int(input())
    change(money, i)

for i in range(case) :
    print(coin[4*i:4*(i+4)])
        
        

print(coin[0 + (4 * i)], coin[1 + (4 * i)], coin[2 + (4 * i)], coin[3 + (4 * i)])