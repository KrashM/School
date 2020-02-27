class student:
    name = ''
    excused_absences = 0
    unexcused_asences = 0
    success = 0

    def input(self):
        self.name = input()
        self.excused_absences = int(input())
        self.unexcused_asences = float(input())
        self.success = float(input())

    def output(self):
        print('\n%s\n%s\n%s\n%s' % (self.name, self.excused_absences, self.unexcused_asences, self.success))

def Partition(arr, low, high):
    i = ( low-1 )
    pivot = arr[high]

    for j in range(low , high): 

        if   arr[j].success < pivot.success: 
            
            i = i+1 
            arr[i],arr[j] = arr[j],arr[i] 

    arr[i+1],arr[high] = arr[high],arr[i+1] 
    return ( i+1 ) 

def QuickSort(arr,low,high): 
    if low < high: 
        pi = Partition(arr,low,high) 

        QuickSort(arr, low, pi-1) 
        QuickSort(arr, pi+1, high) 

n = int(input('Number of students\n'))
students = []
for i in range(n):
    st = student()
    st.input()
    students.append(st)

for i in range(n):
    students[i].output()
QuickSort(students, 0, n - 1)
for i in range(n):
    students[i].output()