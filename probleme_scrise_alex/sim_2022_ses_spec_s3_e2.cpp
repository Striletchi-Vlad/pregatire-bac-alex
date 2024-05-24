#include <iostream>
#include <fstream>

using namespace std;

int main(){
 int a[100][100];
 int n,i,j;
 ifstream fin("bac.txt");
 fin>>n;
 for(i=1;i<=n;i++)
 {for(j=1;j<=n;j++)
   fin>>a[i][j];
 }
 for(i=1;i<=n;i++)
 { for(j=i;j<=n;j++)
    a[i][j]=a[i][j+1];

 }
 for(i=1;i<=n;i++){

   for(j=1;j<=n-1;j++)
   {
     cout<<a[i][j]<<" ";
   }
   cout<<endl;
 }

  

  return 0;
}
