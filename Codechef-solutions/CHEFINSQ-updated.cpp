#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int countSetBits(ull n)
{
  int count = 0;
  while (n)
  {
    count++;
    n &= (n - 1);
  }
  return count;
}

bool isBitSet(ull n, ull pos)
{
  ull twopowerpos = ull(pow(2, pos) + 0.5);
  if (n & twopowerpos)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void countPairs(int *arr, int n, int k)
{
  sort(arr, arr + n);
  int min = 0, cursum;
  for (int i = 0; i < k; i++)
  {
    min += arr[i];
  }
  ull subcount = ull(pow(2, n) + 0.5);
  ull count = 0;
  for (ull i = 0; i < subcount; i++)
  {
    int setBitCount = countSetBits(i);
    // if (setBitCount > k) {
    //   break;
    // }
    if (setBitCount == k)
    {
      cursum = 0;
      for (int j = 0; j < n; j++)
      {
        if (isBitSet(i, (ull)j))
        {
          cursum += arr[j];
        }
      }
      if (cursum == min)
      {
        count++;
      }
    }
  }
  cout << count << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    countPairs(arr, n, k);
  }
  return 0;
}