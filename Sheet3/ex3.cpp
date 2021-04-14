# include <iostream>
using namespace std;

int main () {

  /*
  3.2 (Loops and sums sequences)
  */

  { // a)
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
    cout << " The sum of all natural numbers from 1 to 100 is: " << sum << endl ;
  }

  { // b) Leibnitz
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

     cout << " The Leibnitz series for n=1000000 is: " << sum << endl ;

  }

  { // c) Collatz
    // we have just to ckeck, whether n = 4 occurs in the sequence,
    // because we can see directly that then 4,2,1,4,2,1,... will follow
    int max = 1000000; // max series length we look at (avoids endless loop, if we would (unexpectedly) not find 4,2,1)
    int m;
    int s; // start value should be visible after the for-loop
    for (s = 1; s <= 1000000; s++){ // we check starting values s=1,...,10^6
      m = max;
      long n = s;
        while(n!=4 && m > 0){
          if (n%2==0) {
            n = n/2;
          }
          else {
            n = 3*n+1;
          }
          m--;
        }
      if (m == 0){
        cout << n;
        break;
      }
    }

    if (m==0){
      cout << "For starting value " << s << " we could not find the sequence 4,2,1,..."
      "at a series length of " << m << endl;
    }
    else {
      cout << "Collatz check succeeded: Got to a 4,2,1 loop for all starting values 1,...,10^6\n";
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
    cout << "The minimum of the array is " << min << " at index " << idx << endl;
  }


  /*
  3.4 (Sieve of Eratosthenes)
  */

  {
    int nArr[] = {10, 100};
    int len = sizeof(nArr)/sizeof(nArr[0]);
    int max = nArr[0];

    int expectedResult[] = {17, 1060};

    for (int i = 0; i < len; i++) {
      int n = nArr[i];
      bool *arr = new bool[n+1];
      for (int m=2; m<=n; m++){
        for (int k=2; k<= sqrt(n); k++){
          if(m%k == 0 && m!=k){
            arr[m] = true;
            break;
          }
        }
      }
      int sum = 0;
      for (int j=2; j<=n; j++){
        if (!arr[j]){
          sum += j;
        }
      }

      delete[] arr;

    cout << "For n = " << n << " expected sum is " << expectedResult[i] << " and we get sum " << sum << endl;

    }
  }


}
