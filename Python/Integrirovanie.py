import math

skipFst = False

area = 0
xLength = 10
step = 0.001

def f(x):
    return math.sin(x)

def integrationTrapezoid(base1, base2):
    global area
    global step
    area += ((base1 + base2) / 2) * step


for x in range(int(xLength/step) + 1):
    if skipFst:
        integrationTrapezoid(f((x - 1) * step), f(x * step))
    else:
        skipFst = True

print(f"area = {area}")
