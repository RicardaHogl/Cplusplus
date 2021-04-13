# include <iostream>
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
    std :: cout << " The sum of all natural numbers from 1 to 100 is: " << sum << std :: endl ;
  }

  { // b)
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
     std :: cout << " The Leibnitz series for n=1000000 is: " << sum << std :: endl;
  }

}
