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


void test_modify(int & x)
{
  x = 4;
}

int main()
{
  std::cout << " Hello World!" << std::endl;
  Foo f;
  f.func();
  int x = 0;
  int y = 42;
  auto qqq = [x, &y] {
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    // test_modify(x);
    ++y;
    //++x; // error!
  };

  x = y = 77;
  qqq();
  qqq();
  std::cout << "final y:" << y << std::endl;
  return 0;
}
