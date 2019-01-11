#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;
using ll = long long int;

int n;

string increase_front(string s, int opt_num, vector<int> &numc, char target) {
  int op = opt_num - numc[target - '0'];
  for(int i = 0; i < n && op > 0; i++)
  {
    if(s[i] != target)
    {
      if(numc[s[i] - '0'] > opt_num){
        numc[s[i] - '0']--;
        s[i] = target;
        numc[target - '0']++;
        op--;
      }
    }
  }
  return s;
}

string increase_back(string s, int opt_num, vector<int> &numc, char target){
  int op = opt_num - numc[target - '0'];
  for(int i = n - 1; i >= 0 && op > 0; i--)
  {
    if(s[i] != target){
      if(numc[s[i] - '0'] > opt_num) {
        numc[s[i] - '0']--;
        s[i] = target;
        numc[target - '0']++;
        op--;
      }
    }
  }
  return s;
}

string increase_1(string s, int opt_num, vector<int> &numc){
  //replace 0 by 1
  int op = opt_num - numc[1];
  for(int i = n - 1; i >= 0 && op > 0; i--)
  {
    if(s[i] == '0' && numc[0] > opt_num) {
      numc[0]--;
      s[i] = '1';
      numc[1]++;
      op--;
    }
  }
  //replace 2 by 1
  op = opt_num - numc[1];
  for(int i = 0; i < n && op > 0; i++)
  {
    if(s[i] == '2' && numc[2] > opt_num){
      numc[2]--;
      s[i] = '1';
      numc[1]++;
      op--;
    }
  }
  return s;
}

int main() {
  cin >> n;
  string s;
  cin >> s;
  vector<int> numc(3);
  for(auto e : s)
  {
    numc[e - '0']++;
  }
  int opt_num = n / 3;

  if(opt_num > numc[0]) {
    s = increase_front(s, opt_num, numc, '0');
    //cout << s << endl;
  }
  //cout << numc[0] << " " << numc[1] << " " << numc[2] << endl;
  if(opt_num > numc[2])
  {
    s = increase_back(s, opt_num, numc, '2');
  }
  if(opt_num > numc[1]){
    s = increase_1(s, opt_num, numc);
  }
  cout << s << endl;
  return 0;
}
