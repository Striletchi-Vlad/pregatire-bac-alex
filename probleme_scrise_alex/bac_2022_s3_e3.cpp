#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("bac.txt");
    int nr1, nr2, x, y, cont=0;
    fin>>x>>y;
    fin>>nr1;
    while(fin>>nr2)
    {
      if(x<=nr2 && nr2<=y)
      {
        if(nr2!=nr1)
        {
          cont++;
          nr1=nr2;
        }
      }
    }
    if(x<=nr2 && nr2<=y)
    {
      if(nr1!=nr2)
        cont++;
    }

    cout<<cont;
    return 0;
}
