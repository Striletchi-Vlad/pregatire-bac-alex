/*
Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
precizat, pe care îl transformă în memorie, eliminând numai ultima vocală care apare în text, ca în
exemplu. Programul afișează pe ecran textul obținut sau mesajul nu exista, dacă în text nu există
nicio vocală. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă se citește textul: cuvantul ritm poate fi tradus rhythm
se obține textul cuvantul ritm poate fi trads rhythm 
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
char s[100];
  int i,ok=0;
  cin.get(s,100);
  i=strlen(s)-1;
  while(i>=1 && ok==0)
  {
    if(strchr("aeiou", s[i])!=NULL)
    {
      strcpy(s+i,s+i+1);
      ok=1;
    }
  i--;
  }
  if(ok==1)
    cout<<s;
  else cout<<"nu exista";
  return 0;
}

