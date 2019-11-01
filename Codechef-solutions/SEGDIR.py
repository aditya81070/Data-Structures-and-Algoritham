for _ in range(int(input())):
  d = {}
  n = int(input())
  flag = 0
  for i in range(n):
    l, r, v = list(map(int, input().split(' ')))
    if flag ==0:
      if (v in d.keys()):
        d[v].append((l,r))
        # print(d)
        if(len(d[v]) >= 2):
          length = len(d[v])
          for i in range(0, length):
              li, ri = d[v][i]
              count = 0
              for j in range(i+1, length):
                l, r = d[v][j]
                if((li<=l and l <=ri) or (li <=r and r<=ri) or (l <= li and li <=r) or (l <= ri and ri<=r)):
                  count+=1
                  if (count ==2):
                    flag = 1
                    break
              if (flag): break
      else:
        d[v] = [(l,r)]
  if(flag == 0):
    print('YES')
  else:
    print('NO')