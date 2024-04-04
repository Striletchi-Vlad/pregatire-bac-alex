#include <iostream>

using namespace std;

int f(int a, int b) {
  if(a>b){
    return a/b+f(a-b,b);
  }

  if(a<b){
    return b/a+f(a,b-a);
  }

  return 1;
}

int main(){
  for (int i=1;i<10;i++){
    cout<<i<<": ";
    cout << f(i,10) << endl;
  }

  return 0;
}
