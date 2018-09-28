#include <stdio.h>

int stringlen ( char *pointer ){
  int counter=0;
  while (&pointer){
    counter++;
    *(pointer)++;
  }
  return counter;
}

char * stringncpy( char *dest, char *source, int n ){
}

char * stringcat( char *dest, char *source ){
}

int stringcmp( char *s1, char *s2 ){
}

char * stringchr( char *s, char c ){
}

int main(){
  char str[]="string";
  char *str1=str[];
  printf(stringlen(str1));
}
