/*
  Un cuvânt este prefix al unui alt cuvânt dacă se obține din acesta, prin eliminarea ultimelor sale litere.
Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,20]) și apoi n cuvinte
distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici ale alfabetului englez.
La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul afișează pe
ecran, separate prin câte un spațiu, cuvintele care îl au drept prefix pe ultimul cuvânt citit.
Dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.
Exemplu: dacă n=6 și se citesc cuvintele alăturate,
raita
grai
raid
raion
straie
rai
pe ecran se afișează
raita raid raion
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char cuv[20][100];
  char pref[100];
  int i,n;
  cin>>n;
  cin.ignore();
  for(i=1;i<=n-1;i++)
    cin.getline(cuv[i], 100);
  cin.getline(pref, 100);

  for(i=1;i<=n-1;i++)
  {
    if(strncmp(cuv[i],pref,strlen(pref))==0)
      cout<<cuv[i]<<" ";
  }
  return 0;
}
