#include <iostream>

using namespace std;

int main()
{
  /*
    3.1.a
    multiply a integer by 2
  */
  {
    unsigned char vals[] = {2, 35};
    unsigned int len = sizeof(vals)/sizeof(vals[0]);
    unsigned int i;

    for (i=0; i < len; i++) {
      unsigned char val = vals[i];

      unsigned char multiplied = val<<1; /* Calculate here */
      cout << ((int) val) << " * 2 = " << ((int) multiplied) << endl;
    }
  }

  /*
    3.1.b
    check what bit is set on position pos
  */
  {
    unsigned char pos[] = {1, 2};
    unsigned char vals[] = {1, 1};
    unsigned int len = sizeof(vals)/sizeof(vals[0]);
    unsigned int i;

    for (i=0; i < len; i++) {
      unsigned char val = vals[i];
      unsigned char p = pos[i];

      unsigned char bitIs = (val>>(p-1))%2; /* Calculate here */
      cout << "Bit value at position " << ((int) p) << " for the number " << ((int) val) << ": " << ((int) bitIs) << endl;
    }
  }

  /*
    3.1.c
  */
  {
    unsigned char pos[] = {1, 2, 1, 3};
    unsigned char vals[] = {0, 4, 1, 7};
    unsigned int len = sizeof(vals)/sizeof(vals[0]);
    unsigned int i;


    /* set bit at position pos to 1 */
    for (i=0; i < (len / 2); i++) {
      unsigned char val = vals[i];
      unsigned char p = pos[i];

      unsigned char setTrue = val|(1<<(p-1)); /* Calculate here */
      cout << "Setting Bit " << ((int) p) << " to 1 for number " << ((int) val) << ": " << ((int) setTrue) << endl;
    }

    /* set bit at position pos to 0 */
    for (i = len/2; i < len; i++) {
      unsigned char val = vals[i];
      unsigned char p = pos[i];

      unsigned char setFalse = (val&~(1<<(p-1))); /* Calculate here */
      cout << "Setting Bit " << ((int) p) << " to 0 for number " << ((int) val) << ": " << ((int) setFalse) << endl;
    }
  }

  /*
    3.1.d
    calculate two's complement of x
  */
  {
    unsigned char vals[] = {2, 0, 56};
    unsigned int len = sizeof(vals)/sizeof(vals[0]);
    unsigned int i;

    for (i=0; i < len; i++) {
      unsigned int x = vals[i];

      unsigned char complement = ~(x); /* Calculate here */  // one-complement
      cout << (int) complement << endl;
      for(int p = 1; p <= 8; p++) { // add 1 -> two's complement (unsigned char has 8 bit)
        if ((complement>>(p-1))%2) {
          complement = complement&~(1<<(p-1)); // set all 1's right of least significant 0 to 0
        }
        else {
          complement = complement|(1<<(p-1)); // set least significant 0 to 1
          break;
        }
      }



      cout << "Two's complement of " << x << " is: " << ((int) complement) << endl;
    }
  }

  /*
    3.1.*
    Calculate the logarithm of 2 for all values
  */
  {
    unsigned char vals[] = {0, 1, 2, 3, 4, 8};
    unsigned int i;
    unsigned int len = sizeof(vals)/sizeof(vals[0]);
    for (i=0; i<len; i++) {
      unsigned char val = vals[i];

      unsigned char res = 0;
      /* Calculate here */
      for (int p = 8; p >=1; p--){
        if ((val>>(p-1))%2) {  // find most significant 1
          if ((val>>(p-2))%2){ // if next bit is also 1, we have to round up
            res = p;
          }
          else{
            res = p-1; // if result is exact/rounded down, position-1 of most significant 1 gives the two's log
          }
          break;
        }
      }

      // this gives log(0)=0, but on ex. sheet is x>1 given, so we accept this result

      cout << "log2 of " << ((int) val) << " is: " << ((int) res) << endl;
    }
  }
}
