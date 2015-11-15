#include <iostream>
#include <cmath>
using namespace std;

long double precision( int n, long double e)
{
    if (n == 0){
      return ceil (e);
    } else if (n == 1){
      return floor ((e * 10 ) + 0.5) / 10;
    }else if ( n ==2){
    return ceil((e * 100 ) + 0.05) / 100;
  } else if ( n == 3){
    return floor ((e * 1000 ) + 0.005) / 1000;
  } else if (n == 4){
    return floor ((e * 10000 ) + 0.0005) / 10000;
  }else {
    return e;
  }
}

long double calculate_e (){
  long double e = 2.5;
  long double c = 2.0;
  long double d, factorial;
  for (int i=0;i<5;i++){
    c = c + 1.0;
    d = c;
    factorial = c;
    while (d>1){
      d = d - 1.0;
      factorial = factorial * d;
    }
    e = e + (1.0/factorial);
  }
  return e;
}

int main(){
  int n;
  cout << "Tell me the number of decimal points that you want in the constant 'e', between 0 and 5"<< endl;
  cin>> n;
  long double e = calculate_e ();
  long double e2 = precision(n, e);
  cout << e2 << endl;
  return 0;
}
