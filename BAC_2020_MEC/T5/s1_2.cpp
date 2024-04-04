#include <iostream>

using namespace std;

int tabs = 0;

void f(int n) {
  tabs++;
  for(int i=0;i<tabs;i++) {
    cout<<"\t";
  }
  cout<<"f("<<n<<")\n";

  int i;

  for(i=n;i>=1;i--) {
    f(n-1);
    for(int i=0;i<tabs;i++) {
      cout<<"\t";
    }
    cout<<i<<"\n";
  }

  tabs--;
}

int main(){
  f(3);
  return 0;
}
