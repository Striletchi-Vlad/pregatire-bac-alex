/*
Un text are cel mult 100 de caractere și este format din cuvinte şi numere, separate prin câte un spațiu.
Cuvintele sunt formate numai din litere ale alfabetului englez. Toate numerele sunt reale şi sunt formate
numai din parte întreagă sau din parte întreagă şi parte fracţionară, separate prin virgulă (,), numerele
negative fiind precedate de semnul minus (-).
Scrieţi un program C/C++ care citeşte de la tastatură textul, pe care îl transformă, eliminând din
componenţa sa toate numerele negative. Programul afişează apoi pe ecran textul obţinut.
Exemplu: pentru textul
2,7 minus 3,5 minus 2 egal 2,7 plus -3,5 plus -2 egal -0,2 rezultat
se va afişa pe ecran textul:
2,7 minus 3,5 minus 2 egal 2,7 plus plus egal rezultat 
 * */
#include <iostream>
#include <cstring>

using namespace std;

int main(){
char s[100];
int i;
cin.get(s,100);
for(i=0;i<strlen(s);i++)
{ if(s[i]=='-')
    {
        while(s[i]<'a' || s[i]>'z'){
            strcpy(s+i,s+i+1);
        }
        ///strcpy(s+i,s+i+1);
    }
}
cout<<s;
    return 0;
}
