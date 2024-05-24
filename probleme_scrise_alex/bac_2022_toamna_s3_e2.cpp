#include <iostream>
#include <cstring>

using namespace std;

char voc_prietena(char c){
  int voc[6]={0,'e'-'a','i'-'a','o'-'a','u'-'a'};
  for(int i=4;i>=0;i--)
  {
    if((c-'a')>=voc[i]){
      return voc[i]+'a';
    }
  }

}

int main(){
char s[30];
cin>>s;
for(int i=0;i<strlen(s);i++)
{if(strchr("aeiou",s[i])==NULL)
  s[i]=voc_prietena(s[i]);


}
cout<<s;
return 0;
}

