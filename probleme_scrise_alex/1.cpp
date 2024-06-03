/*
Numim k-secvență într-un șir de numere naturale, o succesiune de termeni aflați pe poziții consecutive
în șir, cu proprietatea că sunt divizibili cu numărul natural nenul k. Lungimea secvenței este egală cu
numărul de termeni ai săi.
Fișierul bac.txt conține numere naturale din intervalul [0,109]: pe prima linie un număr nenul k, iar
pe a doua linie un șir de cel mult 106 numere, separate prin câte un spațiu. Cel puțin un termen din șir
este divizibil cu k. Se cere să se afișeze pe ecran două valori, separate printr-un spațiu, reprezentând
lungimea maximă a unei k-secvențe din șirul aflat în fișier, respectiv numărul de astfel de secvențe.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul are conținutul alăturat,
se afișează 4 2
5
2 10 5 20 21 0 10 60 15 3 9 20 20 5 45
*/

#include <iostream>
#include <fstream>

using namespace std;
int main(){

  ifstream fin("bac.txt");
  int nr1, k;
  fin>>nr1;
  int c1=0,lmax=0,c2=0;
  int nr;
  fin>>k;

  fin>>nr1;
  if(nr1%k==0)
    c1++;

  while(fin>>nr)
  { 

    while(nr%k==0)
    {
      c1++;
      fin>>nr; 
    }

    if(c1>lmax)
    {
      lmax=c1;
      c2=1;
    }
    else if(c1==lmax)
    {
      c2++;
    }
    c1=0;
  
  }
  cout<<lmax<<" "<<c2;
  return 0;
}
