import matplotlib.pyplot as plt
import math

def Area(y, Step, length):
    area = 0
    for i in range(length):
        area += Step * y[i]
    return area

def fill_sin(length, Step, Path, x, y):
    while length > Path:
        x.append(Path)
        y.append(1)
        Path += Step
    plt.plot(x, y)
    Path = 0
def fill_cos(length, Step, Path, x, y):
    while length > Path:
        x.append(Path)
        y.append(math.cos(Path))
        Path += Step
    plt.plot(x, y, 'g')
    Path = 0

x = []
y = []
x1 =[]
y1 =[]

length = int(input('X length - '))
Step = float(input('Step - ')) #Цена деления
Path = 0

fill_sin(length, Step, Path, x, y)
fill_cos(length, Step, Path, x1, y1)

print('Area 1gr -', Area(y, Step, length))
print('Area 2gr -', Area(y1, Step, length))

plt.show()
