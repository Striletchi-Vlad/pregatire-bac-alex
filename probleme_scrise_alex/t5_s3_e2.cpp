/*
Un text cu cel mult 100 de caractere conține cuvinte și numere, separate prin câte un spațiu. Cuvintele
sunt formate numai din litere mici ale alfabetului englez, iar numerele sunt reale, pozitive, cu partea
zecimală și partea întreagă separate prin simbolul virgulă, sau numai cu partea întreagă, ca în exemplu.
Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și afișează pe ecran
numărul de valori întregi din text.
Exemplu: pentru textul
grus leucogeranus are 1,40 m inaltime si traieste intre 30 si 40 de ani
se afișează pe ecran 2
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char s[100],*p;
  int i,j,ok,cont=0;
  cin.get(s,100);

cout<<"Lungime sir: "<<strlen(s)<<"\n";
p = strtok(s, " ");
while (p){
  cout<<"p este: "<<p<<"\n";
  ok=0;
  if(p[0] < '1' || p[0] > '9'){
    ok=1;
  }
  for(i=0;i<strlen(p);i++)
  {
      if (p[i] == ','){
        ok=1;
      }

    }

    if(ok==0){
      cout<<"Creste contor, i="<<i<<"\n";
      cout<<s+i<<"\n";
      cont++;
    }
  p = strtok(NULL, " ");
  }
  cout<<cont;
  return 0;
}
