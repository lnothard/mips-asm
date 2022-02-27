#include <stdio.h>

void mult(int numArr[]) {
   
    while (numArr[0] != 1) {
    
     if (numArr[0] % 2 == 0) {
       numArr[0] /= 2;
       numArr[1] *= 2;
     }
     else {
       numArr[2] += numArr[1];
       numArr[0] /= 2;
       numArr[1] *= 2;
     }

    }

    numArr[2] += numArr[1];
  
}

int main() {
  
  int numArr[3] = {10, 12, 0};
  mult(numArr);
  printf("The result is %d", numArr[2]);	
}