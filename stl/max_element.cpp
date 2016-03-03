#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  int ia[] = { 7,5, 2, 4, 3};
  const vector<int > ivec(ia, ia +5);

  vector<int>::const_iterator iter;
  iter = max_element(ivec.begin(), ivec.end());
  cout << " max_element() " << *iter << endl;
}
