#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "assignment.h"

int string_len(char string[]);
char * string_copy(char* dest, char *source);
char * string_cat(char* dest, char *source);
int * string_cmp(char *s1, char *s2);
char * string_chr(char *s, char c);

int string_len(char string[]){
  int i = 0;
  int ans = 0;
  while (string[i] != 0){
    ans++;
  }
  return ans;
}

char * string_chr(char *s, char c){
  int i = 0;
  while (s[i] != 0){
    if (s[i] == c){
      return *(s + i);
    }
  }
  return NULL;
}
int main(){
}

