/*
Un cuvânt este sufix al unui alt cuvânt dacă se obține din acesta, prin eliminarea primelor sale litere.
Scrieți un program C/C++ care citește de la tastatură două numere naturale n și k (n[2,20],
k[1,n]) și apoi n cuvinte distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici
ale alfabetului englez.
La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul
afișează pe ecran, separate prin câte un spațiu, cuvintele care îl au drept sufix
pe al k-lea cuvânt citit, ca în exemplu. Dacă nu există astfel de cuvinte, se
afișează pe ecran mesajul nu exista.
isihast
paratirisi
isi
meremetisire
acolisitor
hiritisi
paraponisit
Exemplu: dacă n=7, k=3 și se citesc cuvintele alăturate, pe ecran se afișează
paratirisi hiritisi
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int n, k;
  cin>>n>>k;
  char s[500];
  char sufix[20];
  char cuv[20];

  for (int i = 0; i < n; i++){
    cin>>cuv;
    if (i+1 == k){
      strcpy(sufix, cuv);
    }
    else{
      strcat(s, cuv);
      strcat(s, " ");
    }
  }

  char *p;
  p=strtok(s," ");
  while(p)
  {
    if(strcmp(p+strlen(p)-strlen(sufix), sufix) == 0){
      cout<<p<<" ";
    }
    p = strtok(NULL, " ");
  }
  return 0;
}

