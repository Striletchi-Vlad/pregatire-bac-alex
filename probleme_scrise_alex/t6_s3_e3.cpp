#include <iostream>
#include <fstream>

using namespace std;
int main(){
  int i;
  int j;
  int k;
  int copie;
  int copie2;
  int nr=0, p1, p2;
  cin>>p1;
  cin>>p2;
  
  ofstream fout("bac.out");

  for(i=9;i>=1;i--)
  {
    if(p1%i==0 && p1/i<10){
      int c1 = i;
      int c2=p1/i;
      nr=c1*10 + c2;
      copie = nr;

      for(j=9;j>=0;j--){
        nr = copie;
        nr = nr*1000 + j*100 + j*10 + j;
        copie2 = nr;

        for(k=9;k>=1;k--){
          nr = copie2;
          if(p2%k==0 && p2/k<10){
            int c1 = k;
            int c2=p2/k;
            nr=nr*10 + c1;
            nr=nr*10 + c2;
            fout<<nr<<endl;
          }
        }

      }

    }

  }
  return 0;
}
