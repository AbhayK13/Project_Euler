#include<iostream>
#include<stdint.h>
using namespace std;

#define DIGITS 1000

int main() {
  uint8_t fib[DIGITS] = {0}, n1[DIGITS] = {0}, n2[DIGITS] = {0};
  uint16_t temp, carry = 0, fibCount = 2;
  int16_t i;

  while(1){
    for(i = 0; i < DIGITS; i++){
      temp = n2[i] + n1[i] + carry;
      carry = 0;
      if(temp > 9){
        fib[i] = temp % 10;
        carry = temp/10;
      } else{
        fib[i] = temp;
      }
    }

    for(i = 0; i < DIGITS; i++) {
      n2[i] = n1[i];
      n1[i] = fib[i];
    }
    fibCount++;

    if(fib[DIGITS - 1] != 0) 
      break;
  }

  // number was stored backwards, print it out in reverse
  for(i = DIGITS - 1; i >= 0; i--) {
    cout << fib[i];
  }

  cout<<"\nIndex: "<<fibCount;

  return 0;
}