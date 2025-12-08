#include <stdio.h>
struct Point {
  int x;
  int y;
};

struct Line {
  struct Point start;
  struct Point end;
};

struct Point new(int x, int y) {
  struct Point p;
  p.x = x;
  p.y = y;
  return p;
}
typedef struct {
  int x;
  int y;
} Point;

int main() {
  // classic rust style
  struct Point origin = new(0, 0);

  printf("Point origin: (%d, %d)\n", origin.x, origin.y);

  Point non_origin = {10, 20};
  printf("Point non_origin: (%d, %d)\n", non_origin.x, non_origin.y);

  struct Line line = {.start = {0, 0}, .end = {10, 10}};
  printf("Line start: (%d, %d), end: (%d, %d)\n", line.start.x, line.start.y,
         line.end.x, line.end.y);
  return 0;
}
