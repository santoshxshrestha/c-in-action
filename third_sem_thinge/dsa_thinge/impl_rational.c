#include <stdio.h>
#include <threads.h>
#define TRUE 1;
#define FALSE 0;

// custom data type for Rational number
struct Rational {
  int numerator;
  int denominator;
};

// reudcing the Rational number by the use of Euclid's algorithm
void reduce(struct Rational *inrat, struct Rational *outrat) {
  int a, b, rem;
  if (inrat->numerator > inrat->denominator) {
    a = inrat->numerator;
    b = inrat->denominator;
  } else {
    a = inrat->denominator;
    b = inrat->numerator;
  }

  while (b != 0) {
    rem = a % b;
    a = b;
    b = rem;
  }

  outrat->numerator /= a;
  outrat->denominator /= a;
}

// testing if the rationals are equal or not
int equal(struct Rational *rat1, struct Rational *rat2) {
  struct Rational r1, r2;

  // reducing both of the rationals
  reduce(rat1, &r1);
  reduce(rat2, &r2);

  if (r1.numerator == r2.numerator && r1.denominator == r2.denominator) {
    return TRUE;
  }
  return FALSE;
}

// multiply method for the rationals
void multiply(struct Rational *r1, struct Rational *r2, struct Rational *r3) {
  struct Rational rat3;
  rat3.numerator = r1->numerator * r2->numerator;
  rat3.denominator = r1->denominator * r2->denominator;
  reduce(&rat3, r3);
}

// add method for rationals
void add(struct Rational *r1, struct Rational *r2, struct Rational *r3) {
  struct Rational rat3;
  rat3.numerator = r1->numerator + r2->numerator;
  rat3.denominator = r1->denominator + r2->denominator;
  reduce(&rat3, r3);
}

// subtract method for rationals
void subtract(struct Rational *r1, struct Rational *r2, struct Rational *r3) {
  struct Rational rat3;
  rat3.numerator = r1->numerator - r2->numerator;
  rat3.denominator = r1->denominator - r2->denominator;
  reduce(&rat3, r3);
}

// fucking main function
int main() {
  struct Rational inrat = {.numerator = 2, .denominator = 4};
  printf("The vals before reducing is \n numerator: %d \n denominator: %d\n",
         inrat.numerator, inrat.denominator);

  struct Rational outrat;
  // there is issue with the reducer i guess
  reduce(&inrat, &outrat);

  printf("The vals after reducing is \n numerator: %d \n denominator: %d\n",
         outrat.numerator, outrat.numerator);

  struct Rational rat1 = {.numerator = 1, .denominator = 2};
  struct Rational rat2 = {.numerator = 1, .denominator = 2};
  struct Rational outrat1 = {0};
  printf(
      "The first rational number rat1: \n numerator: %d\n denominator: %d\n\n",
      rat1.numerator, rat1.denominator);

  printf(
      "The first rational number rat2: \n numerator: %d\n denominator: %d\n\n",
      rat2.numerator, rat2.denominator);
  add(&rat1, &rat2, &outrat1);

  printf(
      "The result after subtraction is: \n numerator: %d, \n denominator: %d",
      outrat1.numerator, outrat1.denominator);
  return 0;
}
