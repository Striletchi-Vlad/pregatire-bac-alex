#include <iostream>
#include <cstring>

using namespace std;

int main(){
  // print all characters from a to z in decimal
  for (int i = 0; i <= 26; i++){
    cout << 'a' + i << ' ';
  }
  cout << '\n';

  for (char i = 97; i <= 122; i++){
    cout << i << ' ';
  }
  cout << '\n';

  int i = 100;
  cout << "100 convertit in char: ";
  cout << (char)i << '\n';
  cout << '\n';

  char str[50] = "Hello, World!";
  cout << "String: " << str << '\n';
  cout << "str[10]: " << str[10] << '\n';
  cout << "str de la poz 10:";
  cout << str + 10*sizeof(char) << '\n';

  cout << "String: " << str << '\n';
  str[10] = '\0';
  cout << "String dupa taiere: " << str << '\n';
  str[5] = (char)NULL;
  cout << "String dupa taiere: " << str << '\n';

  return 0;
}
