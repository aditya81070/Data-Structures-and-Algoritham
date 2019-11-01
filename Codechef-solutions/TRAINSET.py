for _ in range(int(input())):
  trueDict = {}
  falseDict = {}
  n = int(input())
  total = 0
  for i in range(n):
    s, b = input().split(' ')
    b = bool(int(b))
    if(b):
      if(s in trueDict.keys()):
        trueDict[s] +=1
      else:
        trueDict[s] = 1
    else:
      if(s in falseDict.keys()):
        falseDict[s] +=1
      else:
        falseDict[s] =1
  trueKeys = trueDict.keys()
  falseKeys = falseDict.keys()
  for key in trueKeys:
    if (key in falseKeys):
      if (trueDict[key]>=falseDict[key]):
        total += trueDict[key]
        del falseDict[key]
      else:
        total += falseDict[key]
        del falseDict[key]
    else:
      total += trueDict[key]
  falseKeys = falseDict.keys()
  for key in falseKeys:
    total += falseDict[key]
  print(total)