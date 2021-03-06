#include <algorithm>
#include <vector>
#include <assert.h>
#include <iostream>

using namespace std;
int main()
{
  int ia[] = { 29, 23, 20, 22, 17, 15, 26, 51, 19, 12, 35,40};
  std::sort(&ia[0], &ia[12]);
  bool found_it = binary_search(&ia[0], &ia[12], 18);
  assert(found_it == false);
  vector<int > vec(ia, ia +12);
  sort (vec.begin(), vec.end(), greater<int>());
  for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
      std::cout << *it << std::endl;
    }
  std::cout << std::endl;
  found_it = binary_search(vec.begin(), vec.end(), 26, greater<int>());
  assert(found_it == true);
  return 0;
}
