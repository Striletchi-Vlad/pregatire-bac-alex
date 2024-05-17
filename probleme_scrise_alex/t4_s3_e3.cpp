#include <iostream>
#include <fstream>

using namespace std;

/*
In fisier:
100 50 50 50 49 49 36 16 16 12 10 10 9 7 7

Afisare:
49 16 10 7
*/

int main() {
  int nr1,nr2,poz=0;
  int st=0;
  int dr=0;
  int exista=0;
  ifstream fin("bac.txt");
  fin>>nr1;
  while(fin>>nr2)
  {
    dr++;
    poz++;
    if(nr1!=nr2)
    {
      if(dr-st==2){
        cout<<nr1<<" ";
        exista=1;
      }
        
      st=poz;
      dr=poz;
      nr1=nr2;
    }
  }
  if(dr-st==1)
    cout<<nr1<<" ";

  if (!exista){
    cout<<"nu exista";
  }
  return 0;
}

