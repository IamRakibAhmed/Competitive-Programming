n = int(input())
p = []
m = []

for i in range(n):
    x, y = list(map(int, input().split()))
    p.append(x+y)
    m.append(x-y)

mnp = min(p)
mxp = max(p)
mnm = min(m)
mxm = max(m)

res = [mxp-mnp, mxm-mnm, mnm, mxm, mnp-mxp]
print(max(res))
