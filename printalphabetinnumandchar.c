// print a to z in decimal and character
#include<stdio.h>
int main()
 { 
 char c;
 //printf(“\n\n”);
 for( c = 65 ; c <= 122 ; c = c + 1 )  // ascii A=65 and z=122
 {
 if( c > 90 && c < 97 )
 {    // between them special character
 continue;
 }
 printf("%d - %c \n", c, c);
 }
 printf("\n");
 }
 