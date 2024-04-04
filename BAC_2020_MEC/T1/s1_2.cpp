#include <iostream>

using namespace std;

int f (int x) {
  if(x>20){
    return 20+f(x/10);
  }

  return 2020;
}

int main(){
  cout << f(102030) << endl;
  return 0;
}
