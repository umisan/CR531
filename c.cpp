#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
using ll = long long int;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  if(x > y) {
    cout << n << endl;
  }else{
    int count = 0;
    for(auto e : a)
    {
      if(e <= x){
        count++;
      }
    }
    int result = ceil(count * 0.5);
    cout << result << endl;
  }
  return 0;
}
