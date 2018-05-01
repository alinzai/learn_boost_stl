#include <iostream>
using namespace std;

class Foo
{
public:
  Foo(): _x(3){}

  void func()
  {
    [this](){cout << " _x = " << _x << std::endl;}();
    
  }
private:
  int _x;
};
int main()
{
  std::cout << " Hello World!" << std::endl;
  Foo f;
  f.func();
  return 0;
}
