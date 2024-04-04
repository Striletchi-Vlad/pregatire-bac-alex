#include <iostream>

using namespace std;

void f (int x) {
  cout<<"+";
  if(x>0) {
    f(x/100);
    cout<<x;
  }
  cout<<"+";
}

int main(){
  f(12345);
  return 0;
}
