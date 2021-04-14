# include <iostream>
using namespace std;

int main () {

  /*
  3.2 (Loops and sums sequences)
  */

  { // a)
    cout << "3.2 a)" << endl;
    // Compute sum over the first n natural numbers
    long unsigned int sum = 0;
    unsigned int n = 100;
    // for ( unsigned int i = 1; i <= n; i++) {
    //   sum += i;
    // }
    unsigned int i = 1;
    while(i <= n){
      sum += i;
      i++;
    }
    cout << "The sum of all natural numbers from 1 to 100 is: " << sum << endl << endl;
  }

  { // b) Leibnitz
    cout << "3.2 b)" << endl;
    int n = 1000000;
    double sum = 0;
    for(int k=0; k<=n; k++){
     if(k%2==0){
       sum += 1.0/(2*k+1);
     }
     else {
       sum -= 1.0/(2*k+1);
     }
    }

     cout << "The Leibnitz series for n=1000000 is: " << sum << endl << endl;

  }

  { // c) Collatz
    cout << "3.2 c)" << endl;
    int maxCounter = 1000000; // max series length we look at (avoids endless loop, if we would (unexpectedly) not find 4,2,1)
    int maxLength = -1;
    int maxN = -1;
    int counter;
    int getAll = true;
    int s; // start value should be visible after the for-loop
    for (s = 1; s <= 1000000; s++){ // we check starting values s=1,...,10^6
      counter = 0;
      int lastThree[3] = {};
      long n = s;
        while(counter <= maxCounter
              && !(lastThree[0] == 1 && lastThree[1] == 2 && lastThree[2] == 4))
        {
          counter++;
          if (n%2==0) {
            n = n/2;
          }
          else {
            n = 3*n+1;
          }
          lastThree[2] = lastThree[1];
          lastThree[1] = lastThree[0];
          lastThree[0] = n;
        }
        if (counter > maxLength){
          maxLength = counter;
          maxN = s;
        }
        if (counter > maxCounter){
          cout << "For starting value " << s << " we could not find the sequence 4,2,1,..."
          "at a series length of " << counter << endl;
          getAll = false;
          break;
        }
    }

    if (getAll){
      cout << "Collatz check succeeded: Got to a 4,2,1 loop for all starting values 1,...,10^6\n"
      "The max series has length " << maxLength << " for starting value " << maxN << endl << endl;
    }
  }


  /*
  3.3 (Iterating over arrays)
  */

  {
    int arr[5] = {3 , -1 ,4 , -2 ,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    int idx = 0;
    for (int i=1; i<len; i++){
      if (arr[i] < min){
        min = arr[i];
        idx = i;
      }
    }
    cout << "3.3" << endl;
    cout << "The minimum of the array is " << min << " at index " << idx << endl << endl;
  }


  /*
  3.4 (Sieve of Eratosthenes)
  */

  {
    cout << "3.4" << endl;

    int nArr[] = {10, 100};
    int expectedResult[] = {17, 1060};

    int len = sizeof(nArr)/sizeof(nArr[0]);
    int max = nArr[0];

    for (int i = 0; i < len; i++) {
      int n = nArr[i];
      bool *markerArr = new bool[n+1]; // save true on index m, if m not prime
      for (int m=2; m<=n; m++){
        for (int k=2; k<= sqrt(n); k++){
          if(m%k == 0 && m!=k){
            markerArr[m] = true;
            break;
          }
        }
      }
      int sum = 0;
      for (int j=2; j<=n; j++){
        if (!markerArr[j]){
          sum += j;
        }
      }

      delete[] markerArr;

    cout << "For n = " << n << " expected sum is " << expectedResult[i];
    cout << " and we get sum " << sum << endl;

    }
  }


}
