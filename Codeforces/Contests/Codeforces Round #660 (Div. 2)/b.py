t = int(input())
a = [0]
c = 1

for i in range(1, 10**5+10):
    a.append(c)
    if i % 4 == 0:
        c += 1

for _ in range(t):
    n = int(input())
    x = a[n]
    y = n - x
    print('9' * y + '8' * x)