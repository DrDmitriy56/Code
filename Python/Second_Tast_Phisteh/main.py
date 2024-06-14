def my_funk(x:int):
    return x**2 - 1350*x + 338
my_aSS = 0
for i in range(1, 2025):
    my_aSS += my_funk(i)

print(my_aSS)