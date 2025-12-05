#include <math.h>
#include <stdio.h>
#define PI 3.14159
#define MAX 180

// gcc -o program_name source_file.c -lm
// the -lm flag is used to link the math library

int main() {

  int angle;
  float x, y;
  angle = 0;
  printf("             Angle      Cos(angle) \n \n");
  while (angle <= MAX) {
    x = (PI / MAX) * angle;
    y = cos(x);
    printf("%15d %13.4f\n", angle, y);
    angle = angle + 10;
  }
  return 0;
}
