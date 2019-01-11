#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;

int main() {
  ll n;
  cin >> n;
  ll sum = (n * (n + 1)) / 2;
  if(sum % 2 == 0)
  {
    cout << 0 << endl;
  }else{
    cout << 1 << endl;
  }
}
