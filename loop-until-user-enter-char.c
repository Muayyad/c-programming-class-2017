//this code reads input from user
//the loop stops when the user enters 'y' character
#include <stdio.h>
int main () {
  char c;
  do {
    printf("press y to continue:\n");
    scanf(" %c", c);
    
    //put your code here
      
  } while (c == 'y');

  return 0;
}
