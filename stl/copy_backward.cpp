#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>
using namespace std;


class print_elements
{
public:
  void operator()(string elem)
  {
    cout << elem << (_line_cnt++%8?" ": "\n\t");
  }
  static void reset_line_cnt(){_line_cnt = 1;}
private:
  static int _line_cnt;
};

int print_elements::_line_cnt = 1;


int main()
{
  string sa[] = { "The", "light", "untonsured", "hair",
                  "grained", "and","hued","like","pale","oak"};
  vector<string> svec(sa, sa+10);
  cout << "original list of strings:\n\t";
  for_each(svec.begin(), svec.end(),print_elements());
  cout << "\n\n";
  copy_backward(svec.begin() + 1, svec.end() - 3, svec.end());
  print_elements::reset_line_cnt();
  cout << "sequence after " << "copy_backward(begin + 1, end -3, end)" << std::endl;
  for_each(svec.begin(), svec.end(), print_elements());
  cout << "\n";
  return 0;
}
