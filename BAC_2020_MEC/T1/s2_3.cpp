#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int k, i;
  char a[100];

  k='a'-'A';
  strcpy(a,"VIcToriE");
  cout<<strlen(a);
  for(i=0;i<strlen(a);i++)
  if(a[i]>='A' && a[i]<='Z') a[i]=a[i]+k;
  else a[i]=a[i]-k;
  cout<<a;

  return 0;
}
