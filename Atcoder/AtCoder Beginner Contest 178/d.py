s = int(input())

if s < 3:
    print(0)
    exit()

res = 0

mod = 10**9+7
n = 10**4
x = [1, 1]
y = [1, 1]
rev = [0, 1]
for i in range(2, n + 1):
    x.append((x[-1] * i) % mod)
    rev.append((-rev[mod % i] * (mod//i)) % mod)
    y.append((y[-1] * rev[-1]) % mod)


def solve(n, r):
    if (r < 0 or r > n):
        return 0
    r = min(r, n-r)
    return x[n] * y[r] * y[n-r] % mod


for i in range(s//3):
    s -= 3
    res += solve(s+i, i)
    res %= mod

print(res)
