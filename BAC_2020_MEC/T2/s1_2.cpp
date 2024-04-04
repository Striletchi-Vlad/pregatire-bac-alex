#include <iostream>

using namespace std;

int f(int x, int y) {
  if(x==0){
    return y;
  } 

  if(y==0){
    return x;
  }

  return f(x-y, x%y);
}

int main(){
  cout << f(2020, 15) << endl;
  return 0;
}
