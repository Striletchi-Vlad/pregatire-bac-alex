
/*
Într-un text cu cel mult 102 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, inserând cuvântul succes între oricare două cuvinte ale sale
care se termină cu aceeași literă. Cuvântul inserat este separat prin câte un spațiu de cuvintele vecine.
Textul transformat este afișat pe ecran, iar dacă nu există perechi de astfel de cuvinte, se afișează pe
ecran mesajul nu exista.
Exemplu: dacă textul citit este testez validez utilizez date corecte acum
se obține textul testez succes validez succes utilizez date succes corecte 
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char s[100],cuv[10],*p,lit, lit2,aux[100];
  int i,j;
  cin.get(s,100);
  for(i=1;i<=strlen(s);i++)
  {
    if(s[i]==' ')
    {
      lit=s[i-1];
      j=i+1;
      while(s[j]!=' ')
      {
        lit2=s[j];
        j++;
      }
      if(lit==lit2)
      {
        strcpy(aux,s+i);
        strcpy(s+i," succes");
        strcpy(s+i+7,aux);
        
      }
    }
  }
  cout<<s;
  return 0;
}

