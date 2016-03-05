#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
  vector<int> vec;
  for (int ix = 0; ix < 20; ix++)
  {
    vec.push_back(ix);
  }
  random_shuffle(vec.begin(), vec.end());
  copy(vec.begin(), vec.end(),
       ostream_iterator<int>(cout," "));
  cout << '\n';
  return 0;
}
