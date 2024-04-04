#include <iostream>

using namespace std;

int contor = 0;

int f(int x, int y) {
  contor++;
  cout<< "c=" << contor;
  cout << "\tfunctie apelata cu x=" << x << " si y=" << y << "\n";

  if(x<=1 || y<=1){
    return 0;
  }
  if(x>y){
    int aux = f(x/y,y);
    return 1+f(aux,y);
    // return 1+f(f(x/y,y),y);
  } 

  int aux = f(x,y/x);
  return 1+f(x, aux);
  // return 1+f(x, f(x, y/x));
}

int main(){
  f(20, 2020);
  cout << contor << endl;
  return 0;
}
