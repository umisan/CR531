#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;
using ll = long long int;
using P = pair<ll, int>;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  //vector for find i, j such that ai == aj
  vector<P> findv(n);
  for(int i = 0; i < n; i++)
  {
    findv[i] = {a[i], i};
  }
  sort(findv.begin(), findv.end());

  ll result = 1;
  ll mod = 998244353;
  for(int i = 0; i < n; i++)
  {

  }
}
