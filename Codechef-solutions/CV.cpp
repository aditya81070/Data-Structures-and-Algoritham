#include <iostream>
using namespace std;

int main () {
  int t,n;
  scanf("%d", &t);
  while(t--) {
    int count = 0;
    scanf("%d", &n);
    string s;
    cin >> s;
    for (int i = 1; i<n; i++) {
      if ((s[i - 1] != 'a' && s[i - 1] != 'e' && s[i - 1] != 'i' && s[i - 1] != 'o' && s[i - 1] != 'u') && ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'))) {
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}