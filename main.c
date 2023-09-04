// Program to illustrate structure pointers

#include <stdio.h>

// Define Structures
struct date {
int month;
int day;
int year;
};

int main(void) {

  struct date today, *datePtr;

  datePtr = &today;

  datePtr->month = 9;
  datePtr->day = 25;
  datePtr->year = 2004;

  printf ("Todays date is %d/%d/%.2d.\n", datePtr->month, datePtr->day, datePtr->year % 100);
  
  return 0;
}