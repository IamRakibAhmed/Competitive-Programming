n = int(input())
 
if n < 2:
    print(0)
    exit()
 
mod = 10**9+7
 
res = (pow(10, n, mod) - pow(9, n, mod) * 2 + pow(8, n, mod)) % mod
print(res)