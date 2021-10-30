#include <iostream>
#include <cmath>
#include <vector>
using namespace std; // make name from std visible without std  

double square(double x){ // function that returns a quare value of a double 
  return x*x; 
}

void print_square(double x){
  cout << "the sqaure root of "<< x << " is " << square(x) << endl; 
  return;
}

void some_function(){
  double d = 2.3;  // initialize a double  
  int i = 7;       // initialize and integervoid some_function(){
  d = d + i;       // assign sum to d 
  i = d*i ;        // assign product to i bewar: truncating the double d*i to an int !!
  cout << "i is : "<< i<< endl;
  double d2 {2.5}; // same declaration as d 
  cout << "d2 is equal to :" << d2 << endl;
  auto l = 1.5;    // define a variable without specifiying it type (double in  this case) 
  auto ch = 'x'; // define a variable without specifiying it type (character in  this case)
  auto z = sqrt(l) ;
  vector<int> {1,2,3};
  for (int i = 0; i < 3; ++i)
    {
      cout << "vector line is " << i << endl; 
    }
  return; 
}

int main(){
  
  print_square(1.234);
  some_function() ; 

  return 0;
}
