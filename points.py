class Point:
    x = 0
    y = 0

    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def print(self):
        print('%s\n%s' % (self.x, self.y))
    
    def move(self, n, m):
        self.x += n
        self.y += m
        

x = int(input())
y = int(input())
point = Point(x, y)
point.print()
n = int(input())
m = int(input())
point.move(n, m)
point.print()