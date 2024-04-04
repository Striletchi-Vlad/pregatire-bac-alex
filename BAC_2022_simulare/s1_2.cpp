#include <iostream>

using namespace std;

/*
Explicatie: functia calculeaza cate elemente din vector sunt egale cu pozitia lor in vector.
*/
int f(int st,int dr,int v[]) {
  if(st==dr){
    if(v[st]==st){
      return 1;
    } else {
      return 0;
    } 

  } else {
    return f(st,(st+dr)/2,v) + f(1+(st+dr)/2,dr,v);
  } 
}

int main(){
  int v[10] = {7, 1, 2, 5, 4};
  cout << f(0,4,v) << endl;
  return 0;
}
