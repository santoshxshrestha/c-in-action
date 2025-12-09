#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// here argv is a type of the pointer variable  of type array of character so
// this will pointing the memory addresses of the string (array of the
// characters) that are some where in the memory
int main(int argc, char *argv[]) {
  printf("The args are as follows:\n");

  for (int i = 1; i < argc; i++) {
    // this will print the name of the program
    // printf("%s", *argv);
    //
    // here if the comparision is same then it will return 0 so this will not
    // work so we make it non zeor by the use or ! operation here
    if (!strcmp(argv[i], "--help")) {
      printf("%s: <string> all the garbage that you want to pass as args",
             argv[0]);
      exit(0);
    }
    printf("%s\n", argv[i]);
  }
  return 0;
}
