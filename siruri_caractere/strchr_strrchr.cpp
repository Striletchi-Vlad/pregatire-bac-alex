#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char a[100] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
  
  char* res = strchr(a, 'i');

  cout << res << endl;

  char* res2 = strrchr(a, 'i');
  cout << res2 << endl;
  return 0;
}
