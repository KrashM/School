class Part:
    name = ''
    brand = ''
    number_of = 0
    price = 0.0

    def __init__(self, name, brand, number_of, price):
        self.name = name
        self.brand = brand
        self.number_of = number_of
        self.price = price
    
    def print(self):
        print('%s\n%s\n%s\n%s' % (self.name, self.brand, self.number_of, self.price))

def MergeSort(array):
    if len(array) > 1:
        mid = len(array) // 2
        L = array[:mid]
        R = array[mid:]
        MergeSort(L)
        MergeSort(R)

        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i].name < R[j].name:
                array[k] = L[i]
                i += 1
            else:
                array[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            array[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            array[k] = R[j]
            j += 1
            k += 1

n = int(input())
parts = []

for i in range(n):
    name = input()
    brand = input()
    number_of = int(input())
    price = float(input())
    parts.append(Part(name, brand, number_of, price))

MergeSort(parts)

sum = 0

from prettytable import PrettyTable
table = PrettyTable(['Name', 'Brand', 'Number of parts', 'Price', 'Sum'])
for i in range(n):
    sum += parts[i].price
    table.add_row([parts[i].name, parts[i].brand, parts[i].number_of, parts[i].price, sum])

print(table)