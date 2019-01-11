#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> memo(5001, 0);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    memo[a[i]]++;
  }
  //yes or no
  for(int i = 1; i < memo.size(); i++)
  {
    if(memo[i] > k){
      cout << "NO" << endl;
      return 0;
    }
  }
  //yes
  cout << "YES" << endl;
  vector<int> result = a;
  int color = 1;
  for(int i = 1; i <= 5000; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(a[j] == i)
      {
        result[j] = color++;
        if(color > k) color = 1;
      }
    }
  }
  for(int i = 0; i < n; i++)
  {
    cout << result[i] << " ";
  }
  cout << endl;
  return 0;
}
