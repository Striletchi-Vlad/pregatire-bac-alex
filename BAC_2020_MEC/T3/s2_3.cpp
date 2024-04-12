#include <iostream>
#include <cstring>

using namespace std;

bool trebuie_scos(char* s, int p){
  if(p == 0){
    if(s[p+1] == 'I'){
      return true;
    }
      return false;
  }

  if(p == strlen(s)-1){
    if(s[p-1] == 'I'){
      return true;
    }
    return false;
  }

  if(s[p-1] == 'I' || s[p+1] == 'I'){
    return true;
  }
  return false;

}


int main(){
  char s[20];
  cin>>s;

  int p;

  for (p=0; p<strlen(s); p++){
    if (s[p] == 'A' && trebuie_scos(s, p)){
      strcpy(s+p, s+p+1);
    }
  }

  cout<<s;

}
