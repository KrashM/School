class car:
    brand = ''
    number = ''
    year = 0
    price = 0.0

    def __init__(self, brand, number, year, price):
        self.brand = brand
        self.number = number
        self.year = year
        self.price = price
    
    def print(self):
        print(self.brand)
        print(self.number)
        print(self.year)
        print(self.price)

brand = input("Hello\n")
number = input()
year = int(input())
price = float(input())

my_car = car(brand, number, year, price)
my_car.print()