#include <iostream>
#include <string>
#include <utility>

using namespace std;

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  cout << a << b << endl; 
}

void swap_pointer(int &a, int &b)
{
    int temp = a;
  a = b;
  b = temp;
  cout << a << b << endl; 
}

int main()
{
  int a = 0, b = 1;
  swap(a, b);
  cout << a << b << endl;
  swap_pointer(a, b);
  cout << a << b << endl;
  return 0;
}