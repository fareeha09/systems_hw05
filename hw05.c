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

// char * stringncpy( char *dest, char *source, int n ){
 // }

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

// int stringcmp( char *s1, char *s2 ){
// }

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
	
  //stringlen
  char str[]= "string"; //6
  char str1[]="123456789"; //9
  printf("Length of given string: %d, should return 6\n", stringlen(str));
  printf("Length of given string: %d, should return 9\n", stringlen(str1));
  
  //stringcat
  char string[20] = "\0";
  stringcat(string, "S");
  stringcat(string, "y");
  stringcat(string, "stems");
  printf("Concatenated string: %s\n", string); 
  
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
  
