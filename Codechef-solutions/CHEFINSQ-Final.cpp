#include<bits/stdc++.h>
using namespace std;

long long int binomialCoeff(int n, int k)
{
    long long int res = 1;

    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i)
    {
        res *= (long long)(n - i);
        res /= (long long)(i + 1);
    }

    return res;
}

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, k;
    cin>>n>>k;
    int arr[n];
    int aux[101];
    vector<int>kaux(101);
    memset(aux, 0, sizeof(aux));
    for(int i = 0; i<n; i++) {
      cin>>arr[i];
      aux[arr[i]]++;
    }
    sort(arr, arr+n);
    vector<int> req;
    for(int i = 0; i<k; i++) {
      req.push_back(arr[i]);
      kaux[arr[i]]++;
    }
    req.erase(unique(req.begin(), req.end()), req.end());
    long long int result = 1;
    for(int i = 0; i<req.size(); i++) {
      int total = aux[req[i]];
      int place = kaux[req[i]];
      // cout<<"total"<<total<<" place"<<place<<endl;
      result *= binomialCoeff(total, place);
    }
    cout<<result<<endl;
  }
  return 0;
}