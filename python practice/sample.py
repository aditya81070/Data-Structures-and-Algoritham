x = 'global'

def higherOrder():
  x = 'local'

  def child():
    x = 'childLocal'
    print(x)
  print(x)
  child()

higherOrder()
print(x)