#include <iostream>
#include <fstream>

using namespace std;

/*
In fisier:
10
3 4 4 8

Afisare:
1 2 5 6 7 9 10
*/

int main() {
  ifstream fin("numere.in");
  int n1,n2,i,n;
  fin>>n;

  fin>>n1;
  for(i=1;i<n1;i++)
    cout<<i<<" "; 
  while(fin>>n2)
  {
    if(n2-n1>1)
    { 
      for(i=n1+1;i<n2;i++)
        cout<<i<<" ";
    }
  n1=n2;
  }
  for(i=n2+1;i<=n;i++)
    cout<<i<<" ";

  return 0;
}
