/*
Fișierul bac.txt conține un șir de cel mult 10^6 numere naturale din intervalul [0,103], separate prin
câte un spațiu. Se cere să se afișeze pe ecran suma maximă obținută adunând numere cu aceeași
paritate, aflate pe poziții consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de
vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul bac.txt conține valorile 10 115 1 5 2 2 2 4 7 3 100 20 2 7
se afișează pe ecran numărul 122
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia.
b. Scrieți programul C/C++ corespunzător algoritmului proiectat. 
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream f("bac.txt");  
  int x, s=0, max=0, paritate;
  f>>x;
  paritate=x%2;
  s=x;
  while(f>>x){
    if(x%2==paritate){
      // cout<<"Suma este "<<s<<" dupa ce s-a adaugat " << x << "\n";
      s+=x;
      if(s>max)
        max=s;
    }
    else{
      paritate=x%2;
      s=x;
      // cout<<"Suma este "<<s<<" dupa ce s-a adaugat " << x << "\n";
    }
  }
  cout<<max;
  return 0;
}

