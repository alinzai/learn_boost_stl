#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
  int value = 0;
  int ia[] = {0, 1, 0, 2, 0, 3, 0, 4,0,5};
  vector<int> vec(ia, ia + 10);
  ostream_iterator<int> ofile(cout, " ");
  vector<int>::iterator vec_iter;
  vec_iter = remove(vec.begin(), vec.end(), value);
  copy(vec.begin(), vec.end(), ofile); cout << '\n';
  vec.erase(vec_iter, vec.end());
  copy(vec.begin(), vec.end(), ofile);
  cout << '\n';

  int ia2[5];
  vector<int> vec2(ia, ia + 10);
  remove_copy(vec2.begin(), vec2.end(),
               ia2, value);
  copy(ia2, ia2 + 5, ofile);
  cout << '\n';
  return 0;
}
