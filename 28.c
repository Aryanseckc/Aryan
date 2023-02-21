

#include <stdio.h>

int main(void) {
  // creating a FILE variable
  FILE *fptr;
  
  // creating a character variable
  char ch;
  
  // open the file in write mode
  fptr = fopen("124.txt", "w");
  
  // take user input
  printf("Enter your name: ");
  
  // keep reading the user input from the terminal
  // till Return (Enter) key is pressed
  while( (ch = getchar()) != '\n' ) {

    // write character ch in file
    putc(ch, fptr);

  }
  
  // close the file
  fclose(fptr);
  
  // open the file in read mode
  fopen("124.txt", "r");
  
  // display the content of the file
  printf("\nFile content:\n");
  while( (ch = getc(fptr)) != EOF ) {
    printf("%c", ch);
  }

  printf("\nEnd of file\n");
  
  // close file
  fclose(fptr);
  
  return 0;
}