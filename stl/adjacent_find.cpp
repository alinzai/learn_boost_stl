#include <iostream>
#include <assert.h>

#include <algorithm>
#include <vector>
using namespace std;

class TwiceOver{
public:
  bool operator()(int val1, int val2)
  {
    return val1 == val2/2?true:false;
  }
};

int main()
{
  int ia[] = {1,4,4,8};
  vector<int> vec(ia, ia+4);
  int *piter;
  vector<int>::iterator iter;
  piter = adjacent_find(ia, ia + 4);
  assert(*piter == ia[1]);

  iter = adjacent_find(vec.begin(), vec.end(),TwiceOver());
  assert(*iter == vec[2]);
  cout << "ok: adjacent_find() successed ! \n";
  return 0;
}
