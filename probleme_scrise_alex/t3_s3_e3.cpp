#include <iostream>
#include <fstream>

using namespace std;

/*
In fisier:
 12 25 -6 7 80 -75 101 -6 52 -124 87 99 210

Afisare:
11
*/

int max(int a, int b){
  if(a>b){
    return a;
  }
  return b;
}

int main() {
  ifstream fin("bac.in");
  int gasit_primul_pozitiv=0, gasit_primul_negativ=0;
  int nr;
  int primpoz, ultimpoz, primneg, ultimneg;
  int poz=0;
  while(fin>>nr){
    poz++;
    if (nr<0){
      if (!gasit_primul_negativ){
        gasit_primul_negativ = 1;
        primneg = poz;
        ultimneg = poz;
      }
      else{
        ultimneg = poz;
      }
    }
    else{
      if (!gasit_primul_pozitiv){
        gasit_primul_pozitiv = 1;
        primpoz = poz;
        ultimpoz = poz;
      }
      else{
        ultimpoz = poz;
      }
    }
  }
  int l1 = ultimneg - primpoz + 1;
  int l2 = ultimpoz - primneg + 1;
  int res;
  res = max(l1, l2);
  cout<<res;

  return 0;
}
