#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("bac.txt");
    int smax=0,scur,c;
    int nr1,nr, nrvechi;
    fin>>nr1;
    c=nr1;
    nrvechi=nr1;
    while(fin>>nr)
    {

      if(nr==nr1)
      {
        c--;
        cout<<"c="<<c<<"\n";
      }
      else
      {
        if(c==1)
        { scur=scur+nrvechi;

          if(scur>smax)
            smax=scur;
        } 
        else{
          scur=0;
        }
        nr1=nr;
        c=nr;
      }
      
      nrvechi=nr;
    }

    if(c==1)
    { scur=scur+nrvechi;

      if(scur>smax)
        smax=scur;
    } 

    cout<<smax;
    return 0;
}
