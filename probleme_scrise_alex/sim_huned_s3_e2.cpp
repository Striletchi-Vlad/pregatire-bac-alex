#include <iostream>
#include <cstring>

using namespace std;

int string_redus(char* s){
  for (int i = 0; i < strlen(s); i++){
    if (strchr("*/+-", s[i]) != NULL){
      return 0;
    }
  }
  return 1;
}

int atoi(char* s){
  int n = 0;
  for (int i = 0; i < strlen(s); i++){
    n = n * 10 + s[i] - '0';
  }
  return n;
}

char* reducere_string(char* s){
  s[strlen(s) - 1] = '\0'; // Stergem '=' de la final

  // Daca are '*' in expresie, strtok in functie de '*' si inmultesti
  if (strchr(s, '*') != NULL){
    char* pch1 = strtok(s, "*");
    char* pch2 = strtok(NULL, "*");
    return atoi(pch1) * atoi(pch2);
  }

  if (strchr(s, '/') != NULL){
    char* pch1 = strtok(s, "/");
    char* pch2 = strtok(NULL, "/");
    return (float)atoi(pch1) / atoi(pch2);
  }

  if (strchr(s, '+') != NULL){
    char* pch1 = strtok(s, "+");
    char* pch2 = strtok(NULL, "+");
    return atoi(pch1) + atoi(pch2);
  }

  if (strchr(s, '-') != NULL){
    char* pch1 = strtok(s, "-");
    char* pch2 = strtok(NULL, "-");
    return atoi(pch1) - atoi(pch2);
  }
  return 0;
}

int main(){
  char s[100];
  strcpy(s, "123*3=");
  cout<<s<<reducere_string(s)<<endl;
  strcpy(s, "123/4=");
  cout<<s<<reducere_string(s)<<endl;
  strcpy(s, "123+4=");
  cout<<s<<reducere_string(s)<<endl;
  strcpy(s, "123-4=");
  cout<<s<<reducere_string(s)<<endl;
  return 0;
}
