#include <iostream>
#include <cstring>

using namespace std;

int main(){

  char a[100] = "aaaaHello";
  char b[100] = "aaaaWorld!";

  // Convert H to int
  cout << (int)a[0] << endl;
  cout << (int)b[0] << endl;

  int res = strcmp(a, b);
  
  cout << "strcmp result: " << res << endl;

  res = strncmp(a, b, 3);
  cout << "strncmp result: " << res << endl;



  return 0;
}
