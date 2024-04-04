#include <iostream>

using namespace std;

void f(int x) {
  cout<<x;

  while(x>0){
    f(x-1);
    x=x-1;
  }
}

int main()
{
  f(3);
  return 0;
}
