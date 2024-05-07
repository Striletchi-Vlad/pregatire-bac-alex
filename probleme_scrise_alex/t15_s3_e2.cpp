/*
Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere mici ale alfabetului englez și
sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat și afișează pe ecran numărul de cuvinte ale sale formate dintr-un număr egal de vocale și
consoane. Se consideră vocale literele din mulțimea a, e, i, o, u.
Exemplu: pentru textul
cuvantul consoane are un numar de patru vocale si patru consoane
se afișează pe ecran 6.
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  
  char s[100],*p;
  int cc,cv,i,cont=0;
  cin.get(s, 100);
  p=strtok(s," ");
  while(p)
  {
    // cout<<p<<"\n";
    cc=0;
    cv=0;
    for (int j = 0; j<strlen(p); j++){
      // cout<<p[j];
      if(strchr("aeiou",p[j])!=NULL)
      { 
        cv++;
      }
      else cc++;
      }
    // cout<<"\ncc= "<<cc<<" cv= "<<cv<<"\n";
    if(cc==cv)
      cont++;
    p=strtok(NULL," ");
  }
  cout<<cont;
  return 0;
}

