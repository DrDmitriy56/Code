import math

area = 0
skipFst = False
xLength = 10
def f(x):
    return math.sin(x)
def integrationTrapezoid(fstValue, sndValue, delay):
    global area
    area += ((fstValue + sndValue) / 2) * delay

for x in range(xLength + 1):
    if skipFst:
        integrationTrapezoid(f(x-1), f(x), 1)
    else:
        skipFst = True

print(f"area = {area:.4f}")
