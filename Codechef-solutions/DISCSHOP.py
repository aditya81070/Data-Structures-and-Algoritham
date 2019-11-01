t = int(input())
for _ in range(t):
  flag = 0
  num = input()
  arr = list(map(int,list(num)))
  for i in range(len(arr)-1):
    if(arr[i] > arr[i+1]):
      del arr[i]
      flag = 1
      break
  if(flag==0):
    del arr[len(arr)-1]
  num = ''.join(list(map(str, arr)))
  print(int(num))
