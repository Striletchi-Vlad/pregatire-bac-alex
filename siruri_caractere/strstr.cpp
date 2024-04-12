#include <iostream>
#include <cstring>

using namespace std;

int main(){
  
  char a[100] = "Mama are suc de mere";

  char* res = strstr(a, "suc");
  cout << res << endl;
  return 0;
}
