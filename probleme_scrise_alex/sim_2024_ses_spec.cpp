#include <iostream>
#include <fstream>

using namespace std;

void proceseaza(int c, int* p, int* u, int* pval, int* uval, int poz, int nr){
  if (p[c] == -1){
    p[c] = poz;
    u[c] = poz;
    pval[c] = nr;
    uval[c] = nr;
  } else {
    u[c] = poz;
    uval[c] = nr;
  }
}

int main(){

  ifstream fin("numere.in");

  int nr, c1, c2;
  int p[10];
  int u[10];
  int pval[10];
  int uval[10];
  for (int i = 0; i < 10; i++){
    p[i] = -1;
    u[i] = -1;
  }
  int poz=0;

  while(fin>>nr){
    c1 = nr%10;
    c2 = nr/10%10;
    proceseaza(c1, p, u, pval, uval, poz, nr);
    proceseaza(c2, p, u, pval, uval, poz, nr);
    poz++;
  }


  for (int i =9; i >= 0; i--){
    if (p[i] != -1 && p[i] != u[i]){
      cout<<pval[i]<<" "<<uval[i]<<endl;
      return 0;
    }
  }

  cout<<"Nu exista"<<endl;
  return 0;
}
