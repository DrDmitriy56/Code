import matplotlib.pyplot as plt
import math

def Area(y, Step, Amount):
    area = 0
    for i in range(Amount):
        area += Step * y[i]
    return area

def fill_sin(Amount, Step, Path, x, y):
    while Amount > Path:
        x.append(Path)
        y.append(math.sin(Path))
        Path += Step
    plt.plot(x, y)
    Path = 0

def fill_cos(Amount, Step, Path, x, y):
    while Amount > Path:
        x.append(Path)
        y.append(math.cos(Path))
        Path += Step
    plt.plot(x, y, 'g')
    Path = 0

x = []
y = []
x1 =[]
y1 =[]

Amount = int(input('X length - '))
Step = float(input('Step - '))
Path = 0

fill_sin(Amount, Step, Path, x, y)
fill_cos(Amount, Step, Path, x1, y1)

print('Area 1gr -', Area(y, Step, Amount))
print('Area 2gr -', Area(y1, Step, Amount))

plt.show()
