#include <iostream>
#include <cstring>

using namespace std;

int main(){

  char a[100] = "Mama are suc de mere,,!!,,, si tata are suc!de mere";

  char *p;

  p = strtok(a, " ,!");
  while (p != NULL){
    cout << p << endl;
    p = strtok(NULL, " ,!");

  }
  return 0;
}
