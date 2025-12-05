#include <stdio.h>
struct Point {
  int x;
  int y;
};

typedef struct Point Point;

int main() {
  // this is what we are doing with out typedef
  struct Point leftPoint, rightPoint;
  leftPoint.x = 10;
  leftPoint.y = 20;
  rightPoint.x = 30;
  rightPoint.y = 40;
  printf("Left Point: (%d, %d)\n", leftPoint.x, leftPoint.y);
  printf("Right Point: (%d, %d)\n", rightPoint.x, rightPoint.y);

  // we can do following also because of typedef
  Point topPoint, bottomPoint;
  topPoint.x = 50;
  topPoint.y = 60;
  bottomPoint.x = 70;
  bottomPoint.y = 80;
  printf("Top Point: (%d, %d)\n", topPoint.x, topPoint.y);
  printf("Bottom Point: (%d, %d)\n", bottomPoint.x, bottomPoint.y);
  return 0;
}
