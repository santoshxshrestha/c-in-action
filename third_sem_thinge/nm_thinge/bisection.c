#include <stdio.h>
#include <stdlib.h>

float equatiion(float x) {
  // here we calculate the equatiion
  float calc = 3 * x * x - 6 * x + 2;
  return calc;
}

// this will just initialize the value
void initializer(float *xl, float *xu) {
  *xl = 1;
  *xu = 2;
  float fxl = equatiion(*xl);
  float fxu = equatiion(*xu);

  while (fxl * fxu > 0) {
    *xl += 1;
    *xu += 1;
  }
  printf("The roots lies between:\n xl: %f and \n xu: %f\n \n", *xl, *xu);
  return;
}

// this is calculate the  xm
void midpoint(float *xl, float *xu, float *xm) {
  *xm = (*xl + *xu) / 2;
  float fxm = equatiion(*xm);
  float fxl = equatiion(*xl);
  float fxu = equatiion(*xu);
  if ((fxl * fxu) == 0) {
    printf("The root is %f", *xm);
    return;
  } else if ((fxl * fxu) < 0) {
    *xu = *xm;
    printf("The root lies between: \n xl: %f and \n xu: %f\n ", *xl, *xu);
    return;
  } else if ((fxl * fxu) > 0) {
    *xl = *xm;
    printf("The root lies between: \n xl: %f and \n xu: %f\n ", *xl, *xu);
    return;
  }
};

// calculating error
void error(float *xl, float *xu, float *era) {
  *era = (*xl - *xu) / *xu;
  if (*era < 0) {
    *era = (-1) * *era;
  }
}

int main() {
  float xl, xu, xm;
  float era = 0, e = 0.05;
  initializer(&xl, &xu);
  midpoint(&xl, &xu, &xm);
  error(&xl, &xu, &era);

  while (era < e) {
    midpoint(&xl, &xu, &xm);
    error(&xl, &xu, &era);
  }

  return 0;
}
