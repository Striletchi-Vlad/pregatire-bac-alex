#include <iostream>

using namespace std;

int f (int n) {
  if (n!=0){
    return n%20+f(n/20);
  }

  return 0;
}

int main(){
  cout << f(2020) << endl;
  return 0;
}

