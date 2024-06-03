#include <iostream>
#include <fstream>

using namespace std;
int main(){
  int s=0;
  int smax=-999;
  int nr;
  ifstream fin("bac.txt");

  while(fin>>nr){
    s=s+nr;
    cout<<s<<endl;
    if(s<nr)
      s=nr;

    if(s>smax){
      smax=s;
    }

  }
  cout<<endl;
  cout<<smax;
  return 0;
}
