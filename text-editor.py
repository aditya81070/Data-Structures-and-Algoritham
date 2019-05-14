class Lexer:
  def tokenize(self, tokens, input):
    consumed = []
    while(len(input) != 0):
      for t in tokens:
