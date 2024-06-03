/*
Fișierul bac.in conține un șir de cel mult 106 numere naturale din intervalul [0,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran pozițiile din șir pe care se află termeni precedați de un
număr maxim de valori care au cifra unităților egală cu cifra unităților lor. Numerele afișate sunt separate
prin câte un spațiu. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul bac.in conține numerele 112 12 5 25 88 15 2 19 32 179 35 621
pe ecran se afișează numerele de mai jos (termenii 32, respectiv 35 respectă proprietatea cerută):
9 11
*/


#include <iostream>
#include <fstream>

using namespace std;
int main(){
  int count[10];
  int lastpos[10];
  int nr, c;

  ifstream fin("bac.in");
  int pos=1;
  while(fin>>nr){
    c = nr%10;
    count[c]++;
    lastpos[c]=pos;
    pos++;
  }

  int posmax=0;
  for(int i=0; i<10;i++){
    if(count[i]>posmax){
      posmax=count[i];
    }
  }

  for(int i=0; i<10;i++){
    if(count[i]==posmax){
      cout<<lastpos[i]<<" ";
    }
  }


  return 0;

}
