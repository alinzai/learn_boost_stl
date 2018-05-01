#include <future>
#include <thread>
#include <chrono>
#include <iostream>
#include <random>
using namespace std;

void delay_()
{
  std::cout << "delay_ begin" << std::endl;
  this_thread::sleep_for(chrono::milliseconds(1000));
  std::cout << "delay_" << std::endl;
}


int main()
{
  {
    std::async(std::launch::async,delay_);
    std::cout << "delay_after" << std::endl;
    //x.get();
    std::cout << "delay_after2" << std::endl;
  }
  std::cout << "Hello World" << std::endl;
  return 0;
}
