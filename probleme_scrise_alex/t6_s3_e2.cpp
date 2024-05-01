/*
Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere mici ale alfabetului englez și
sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat și afișează pe ecran, pe linii separate, toate cuvintele sale pentru care numărul de vocale
este strict mai mic decât numărul de consoane. Dacă nu există niciun astfel de cuvânt, se afișează pe
ecran mesajul nu exista. Se consideră vocale literele din mulțimea a, e, i, o, u.
Exemplu: pentru textul ei au plantat tamarix ea a adus iasomie
se afișează pe ecran, nu neapărat în această ordine, cuvintele alăturate. 
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char s[100],*p;
  int i,cc,cv;
  cin.get(s, 100);
  p=strtok(s," ");
  while(p)
  { cc=0;
    cv=0;
    for(i=0;i<strlen(p);i++)
    {
      if(strchr("aeiou", p[i])!=NULL)
        cv++;
      else cc++;

    }
    if(cv<cc)
      cout<<p<<" ";
  p=strtok(NULL," "); 

  }
  return 0;
}
