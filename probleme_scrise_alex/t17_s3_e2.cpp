/*
Într-un text cu cel mult 10^2 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, duplicând fiecare cuvânt format numai din vocale. Cuvântul
duplicat este separat prin câte un spațiu de cuvintele vecine. Textul transformat este afișat pe ecran, iar
dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.
Exemplu: dacă textul citit este oaia aia alba e a ei
se obține textul oaia oaia aia aia alba e e a a ei ei
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char s[300], s_copy[100], *p;
  char aux[300];
  int i,ok, total_offset=0;
  cin.get(s,100);
  strcpy(s_copy, s);

  p=strtok(s_copy," ");
  while(p)

  { ok=0;
    i=1;
    while(ok==0 && i<strlen(p))
    { if(strchr("aeiou",p[i])==NULL)
          ok=1;
      i++;
    }
    if(ok==0)
    {
      strcpy(aux, s+total_offset);

      strcpy(s+total_offset, p);
      strcpy(s+total_offset+strlen(p), " ");

      strcpy(s+total_offset+strlen(p)+1, aux);

      total_offset += strlen(p) + 1;

    }

    total_offset += strlen(p) + 1;
    p = strtok(NULL, " ");
  }

  cout<<s;
  return 0;
}

