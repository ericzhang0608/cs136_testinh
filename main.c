/////////////////////////////////////////////////////////////////////////////
// INTEGRITY STATEMENT (v3)
//
// By signing your name and ID below you are stating that you have agreed
// to the online academic integrity statement:
// https://student.cs.uwaterloo.ca/~cs136/current/assignments/integrity.shtml
/////////////////////////////////////////////////////////////////////////////
// I received help from and/or collaborated with:

// ERROR_NO_INTEGRITY_STATEMENT
//
// Name: ERROR_NO_NAME
// login ID: ERROR_NO_LOGIN
/////////////////////////////////////////////////////////////////////////////


#include "cs136.h"

// === Helper functions =======================================================

// return 1 if num is positive number, -1 otherwise.
int sign(int num) {
    return (num > 0) - (num < 0);
}


int mean_only(int all, int count) {
    printf("%d", all / count);
}


void read_number_helper(int small, int big, int all, int count) {
    int input = read_int();
    if (input == READ_INT_FAIL) {
        printf("=== STATISTICS ===\n");
        printf("SAMPLES: %d\n", count);
        printf("MIN: %d\n", small);
        printf("MAX: %d\n", big);
        printf("RANGE: %d\n", big - small);
    } else {
        read_number_helper((input < small ? input : small), (input > big ? input : big),
                           all += input, count += 1);
    }
}

// === Core functions =========================================================


// read_numbers() reads numbers from input and prints statistics after the last
//   number was read.
// effect: reads from input
//         prints to output
void read_numbers(void) {
    // use the string(s) below in your printf statements
    //   "=== STATISTICS ===\n"
    //   "SAMPLES: %d\n"
    //   "MIN: %d\n"
    //   "MAX: %d\n"
    //   "RANGE: %d\n"
    //   "MEAN: %d.%02d\n"
    // your implementation goes heres
}

// === THERE IS NO NEED TO MODIFY THE MAIN FUNCTION ===========================
int main(void) {
  mean_only(15, 6);
  return EXIT_SUCCESS;
}