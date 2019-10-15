import math
t = int(input())
f = [0,1]

def isPowerOfTwo(n):
  return (n and (not(n & (n-1))))

def highestPowerOfTwo(n):
  p = math.floor(math.log(n, 2))
  return math.pow(2,p)

for i in range(2,60):
  f.append((f[i-1] + f[i-2]) % 10)

for i in range(t):
  n = int(input())
  if (not isPowerOfTwo(n)):
    n = highestPowerOfTwo(n)
  print(f[(n-1)%60])

