#include <stdio.h>

//strlen: returns length of string 
int stringlen ( char * pointer){
  int counter=0; // initialize counter 
  while (*pointer){
    counter++;
    pointer++;
  }
  return counter;
}

char * stringncpy( char *dest, char *source, int n ){
  int counter = 0;
  while ( counter < n) {
    *dest = *source;
    dest++;
    source++;
    counter++;
  }
  return dest;
}

//strcat: concatenates the string with every call
char * stringcat( char *dest, char *source ){
	while (*dest){ //if dest is null, then add source from index 0
		dest++; //if dest is not null,then move until it is null
	}
	while (*source){ //if source is not null, add value of source to dest
		*dest = *source;
		source++;
		dest++;
	} 
	*(dest++)=0; //null at end
	return dest;
}

int stringcmp( char *s1, char *s2 ) {
  while ( *s1) {
    if ( *s1 > *s2)
      return 1;
    if ( *s1 < *s2)
      return -1;
    else {
      s1++;
      s2++;
    }
  }
  return 0;
}

//strchr: returns a pointer to the place where the char c is found in s, returns null pointer if not found
char * stringchr( char *s, char c ){
	while (((*s)!=c) && (*s)){
	s++;
	}
	if (((*s)!=c) && (*s))
		return 'no';
	else 
		return s;
}

int main(){

  char str0[30] = "hello sunshine!";
  char str1[30] = "goodnight moon";
  char *str0pt = str0;
  char *str1pt = str1;

  printf( "str0: [hello sunshine!]\nstr1: [goodnight moon]\n\n");
  
	
  //stringlen
  printf( "Testing stringlen( str0)\n");
  printf("[standard]:  %d\n", strlen(str0));
  printf("[ours]: %d\n", stringlen(str0));

  printf( "Testing stringlen( str1)\n");
  printf("[standard] %d\n", strlen(str1));
  printf("[ours] %d\n\n", stringlen(str1));

  //stringncpy
  printf( "Testing stringncpy( str0, str1)\n");
  strncpy( str0pt, str1pt, 9);
  printf( "[standard]: [%s]\n", str0);
  strncpy( str1pt, str0pt, 9); //returns string to original "hello sunshine!"
  stringncpy( str0pt, str1pt, 9);
  printf( "[ours]: [%s]\n\n", str0);


  //stringcat
  printf( "Testing stringcat( str1, \"light\")\n");
  strcat( str1, "light");
  printf( "[standard]: [%s]\n", str1);
  strcpy( str1, "goodnight moon");
  stringcat( str1, "light");
  printf( "[ours]: [%s]\n\n", str1);
  

  //stringcmp
  printf( "Testing stringcmp( str0, str1)\n");
  printf( "[standard]: %d\n", strcmp( str0, str1));
  printf( "[ours]: %d\n", stringcmp( str0, str1));
  printf( "Testing stringcmp( str1, str0)\n");
  printf( "[standard]: %d\n", strcmp( str1, str0));
  printf( "[ours]: %d\n", stringcmp( str1, str0));
  printf( "Testing stringcmp( str0, str0)\n");
  printf( "[standard]: %d\n", strcmp( str0, str0));
  printf( "[ours]: %d\n\n", stringcmp( str0, str0));
  
  //stringchr
  char str2[]= "computer science";
  char * point;
  point = stringchr(str2, 'c'); //index 0
  printf("the 'c' character found at index %d\n", point-str2);
  point = stringchr(str2, 'u'); //index 4
  printf("the 'u' character found at index %d\n", point-str2);
  point = stringchr(str2, ' '); //index 8
  printf("the ' ' character found at index %d\n", point-str2);
  point = stringchr(str2, 'l'); //null -PROBLEM: IT SUBTRACTS THE MEMORY LOCATION OF THE NULL POINTER FROM THE MEMORY LOCATION OF POINT AND RETURNS THAT VALUE
  printf("the 'l' character found at index %d\n", point-str2); //it keeps returning 16 so idk if my previous statement is right... but idk how to fix it rn   
  }
  
