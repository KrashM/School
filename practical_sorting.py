file_data = []
with open("D:\\Hristo_10b\\Computers.txt", "r") as file:
    file_data = file.readlines()

data = []

for line in file_data:
    if line.endswith('\n'): data.append(line[:-1])
    else:
        data.append(line)

computers = []

if len(data) > 0:
    i = 0
    while i < len(data):
        computer = []
        computer.append(data[i])
        computer.append(data[i + 1])
        computer.append(data[i + 2])
        computer.append(data[i + 3])
        computer.append(data[i + 4])
        computer.append(data[i + 5])
        computer.append(data[i + 6])
        computers.append(computer)
        i += 8

n = int(input("Do you want to add something?(type a number)\n"))
for i in range(n):
    computer = []
    computer.append(input("Mother board?\n"))
    computer.append(input("Processor?\n"))
    computer.append(input("Graphics card?\n"))
    computer.append(input("RAM?\n"))
    computer.append(input("Hard disk capacity?\n"))
    computer.append(input("Solid state drive capacity?\n"))
    computer.append(input("Power supply unit watage?\n"))
    for part in computer:
        part.replace('\n', '')
    computers.append(computer)

sort_by = int(input("Sort by?\nMother board - 1\nCPU - 2\nGPU - 3\nRAM - 4\nHDD - 5\nSSD - 6\nPCU - 7\n")) - 1
sorting_method = int(input("Sort with?\nBubble sort - 1\nShaker sort - 2\nInsertion sort - 3\nQuick sort - 4\nMerge sort - 5\nHeap sort - 6\nRadix sort(LSD) - 7(only for numbers)\n"))

def BubbleSort(array):
    for i in range(len(array)):
        for j in range(len(array) - i - 1):
            if array[j][sort_by] > array[j+1][sort_by]:
                array[j], array[j+1] = array[j+1], array[j]

def ShakerSort(array):
    def swap(i, j):
        array[i], array[j] = array[j], array[i]
 
    upper = len(array) - 1
    lower = 0
 
    no_swap = False
    while (not no_swap and upper - lower > 1):
        no_swap = True
        for j in range(lower, upper):
            if array[j + 1] < array[j]:
                swap(j + 1, j)
                no_swap = False
        upper = upper - 1
 
        for j in range(upper, lower, -1):
            if array[j - 1] > array[j]:
                swap(j - 1, j)
                no_swap = False
        lower = lower + 1

def MergeSort(array):
    if len(array) > 1:
        mid = len(array) // 2
        L = array[:mid]
        R = array[mid:]
        MergeSort(L)
        MergeSort(R)

        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i][sort_by] < R[j][sort_by]:
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

def RadixSortLSD(array):
    digitNumber = 0
    for item in array:
        if item[sort_by] == 0:
            continue
        import math
        if int(math.log10(int(item[sort_by]))) + 1 > digitNumber:
            digitNumber = int(math.log10(int(item[sort_by]))) + 1
    power = 1
    queues = [
        [],
        [],
        [],
        [],
        [],
        [],
        [],
        [],
        [],
        []
    ]

    i = 0
    while i < digitNumber:
        j = 0
        while j < len(array):
            queues[int(int(array[j][sort_by]) / power % 10)].append(array[j])
            j += 1

        l = 0
        m = 0
        while l < len(array):
            n = 0
            length = len(queues[m])
            while n < length:
                array[l] = queues[m].pop()
                l += 1
                n += 1
            m += 1

        power *= 10
        i += 1

def Heapify(arr, n, i): 
    largest = i 
    l = 2 * i + 1
    r = 2 * i + 2
  
    if l < n and arr[i][sort_by] < arr[l][sort_by]: 
        largest = l 
  
    if r < n and arr[largest][sort_by] < arr[r][sort_by]: 
        largest = r 
  
    if largest != i: 
        arr[i],arr[largest] = arr[largest],arr[i]
  
        Heapify(arr, n, largest) 
  
def HeapSort(arr): 
    n = len(arr) 
  
    for i in range(n, -1, -1): 
        Heapify(arr, n, i) 
  
    for i in range(n-1, 0, -1): 
        arr[i], arr[0] = arr[0], arr[i]
        Heapify(arr, i, 0) 

def InsertionSort(arr): 
  
    for i in range(1, len(arr)): 
  
        key = arr[i]
  
        j = i-1
        while j >= 0 and key[sort_by] < arr[j][sort_by] : 
                arr[j + 1] = arr[j] 
                j -= 1
        arr[j + 1] = key 

    for i in range(len(arr)): 
        
        min_idx = i 
        for j in range(i+1, len(arr)): 
            if arr[min_idx][sort_by] > arr[j][sort_by]: 
                min_idx = j 
                
        arr[i], arr[min_idx] = arr[min_idx], arr[i] 

def Partition(arr,low,high): 
    i = ( low-1 )
    pivot = arr[high]
  
    for j in range(low , high): 
  
        if   arr[j][sort_by] < pivot[sort_by]: 
          
            i = i+1 
            arr[i],arr[j] = arr[j],arr[i] 
  
    arr[i+1],arr[high] = arr[high],arr[i+1] 
    return ( i+1 ) 
  
def QuickSort(arr,low,high): 
    if low < high: 
        pi = Partition(arr,low,high) 
  
        QuickSort(arr, low, pi-1) 
        QuickSort(arr, pi+1, high) 

if sorting_method == 1:
    BubbleSort(computers)
if sorting_method == 2:
    ShakerSort(computers)
if sorting_method == 3:
    InsertionSort(computers)
if sorting_method == 4:
    QuickSort(computers, 0, len(computers))
if sorting_method == 5:
    MergeSort(computers)
if sorting_method == 6:
    HeapSort(computers)
if sorting_method == 7:
    RadixSortLSD(computers)

for computer in computers:
    print(computer)

with open("D:\\Hristo_10b\\Computers.txt", "w") as file:
    for computer in computers:
        for part in computer:
            file.write(part + '\n')
        file.write('\n')

# 2
# Asus Z730
# Intel I9 9900K
# Nvidia RTX 2080
# 64
# 2000
# 1000
# 1000
# Gigabyte
# AMD Ryzen 5
# Nvidia Gforce GTX 960
# 8
# 1000
# 500
# 500