
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  
  char a[100] = "Hello";
  char b[100] = "World!";

  // concatenating b to a
  strcat(a, " ");
  strcat(a, b);
  cout << "After concatenation: " << a << endl;

  strncat(a, b, 3);

  cout << "After concatenating another 3 characters: " << a << endl;

  char* c;
  c = (char*)malloc(100);

  strcat(c, b);
  cout << "After concatenating b to c(c was empty): " << c << endl;
  return 0;
}
