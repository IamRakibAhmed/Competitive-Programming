n, m, setX, setY = map(int, input().split())
a = [[0 for i in range(m+1)] for i in range(n+1)]

def solve(setX, setY):
    preY = setY
    for i in range(1, m+1):
        if a[setX][i] == 0:
            a[setX][i] = 1
            print(setX, i)
            preY = i
    if setX != n:
        if a[setX+1][preY] == 0:
            a[setX+1][preY] = 1
            print(setX+1, preY)
            solve(setX+1, preY)
        elif a[setX+1][preY] == 1:
            a[setX+2][preY] = 1
            print(setX+2, preY)
            solve(setX+2, preY)

            a[setX+1][m] = 1
            print(setX+1, m)
            for i in range(1, m+1):
                if a[setX+1][i] == 0:
                    a[setX+1][i] = 1
                    print(setX+1, i)
    else:
        return


a[setX][setY] = 1
print(setX, setY)

setY = 1
a[setX][setY] = 1
print(setX, setY)

setX = 1
a[setX][setY] = 1
print(setX, setY)
solve(setX, setY)